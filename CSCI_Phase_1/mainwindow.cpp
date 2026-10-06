#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cryptoengine.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFileInfo>
#include <fstream>
#include <string>

int isDecrypting = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Encrypt_Button_clicked()
{
    isDecrypting = 0;
    ui->Input_FilePath->setText("");
    ui->Output_FilePath->setText("");
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Decrypt_Button_clicked()
{
    isDecrypting = 1;
    ui->Input_FilePath->setText("");
    ui->Output_FilePath->setText("");
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Home_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Exit_button_clicked()
{
    close();
}

void MainWindow::on_Input_Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "All Files (*)");
    if (!fileName.isEmpty()) {
        ui->Input_FilePath->setText(fileName);
    }
}

void MainWindow::on_Output_Button_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", "", "All Files (*)");
    if (!fileName.isEmpty()) {
        ui->Output_FilePath->setText(fileName);
    }
}

void MainWindow::on_NextButton_clicked()
{
    QString inPath = ui->Input_FilePath->text();
    QString outPath = ui->Output_FilePath->text();

    if (inPath == "") {
        QMessageBox::warning(this, "Error", "Please select an Input File first!");
        return;
    }

    if (outPath == "") {
        QFileInfo fileInfo(inPath);
        QString dirPath = fileInfo.absolutePath();

        if (isDecrypting == 0) {
            outPath = dirPath + "/cipher.txt";
        } else {
            outPath = dirPath + "/plain.txt";
        }
        ui->Output_FilePath->setText(outPath);
    }

    std::string inputPathStr = inPath.toStdString();
    std::string outputPathStr = outPath.toStdString();

    std::ifstream inFile(inputPathStr);
    if (inFile.is_open() == false) {
        QMessageBox::warning(this, "Error", "Could not open the input file. Does it exist?");
        return;
    }

    std::string fullText = "";
    char tempChar;
    while (inFile.get(tempChar)) {
        fullText = fullText + tempChar;
    }
    inFile.close();

    ui->logTextEdit->setText("");

    CryptoResult result = CryptoEngine::processText(fullText, isDecrypting);

    std::ofstream outFile(outputPathStr);
    outFile << result.finalOutput;
    outFile.close();

    ui->logTextEdit->append(result.stepLogs);

    QString finalLog = "\n=========================================\n";
    if (isDecrypting == 0) {
        finalLog = finalLog + "Encryption is done\nResult: \n";
    } else {
        finalLog = finalLog + "DECRYPTION COMPLETELY FINISHED!\nFinal Decrypted Result: \n";
    }

    finalLog = finalLog + QString::fromStdString(result.finalOutput) + "\n\n";
    finalLog = finalLog + "File successfully saved to:\n" + outPath;
    ui->logTextEdit->append(finalLog);

    ui->stackedWidget->setCurrentIndex(2);
}