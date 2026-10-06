#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_Encrypt_Button_clicked();

    void on_Decrypt_Button_clicked();

    void on_BackButton_clicked();

    void on_NextButton_clicked();

    void on_Home_Button_clicked();

    void on_Exit_button_clicked();

    void on_Input_Button_clicked();

    void on_Output_Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif
