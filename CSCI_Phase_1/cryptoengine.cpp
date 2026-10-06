#include "cryptoengine.h"
#include <cctype>

CryptoResult CryptoEngine::processText(const std::string& fullText, int isDecrypting) {
    CryptoResult result;
    result.finalOutput = "";
    result.stepLogs = "";

    std::string monoKey = "lwmkbdpcvazusjgrynqxoftehi";
    int shift = 3;
    int currentMode = 1;
    int monoCount = 0;
    int blockNum = 1;

    std::string currentChunk = "";
    int charCounter = 0;

    for (int i = 0; i < fullText.length(); i++) {
        char currentChar = fullText[i];
        currentChunk = currentChunk + currentChar;

        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            charCounter = charCounter + 1;
        }

        bool isChunkDone = false;

        if (currentMode == 1 && charCounter == 6) {
            isChunkDone = true;
        } else if (currentMode == 2 && charCounter == 8) {
            isChunkDone = true;
        } else if (i == fullText.length() - 1) {
            isChunkDone = true;
        }

        if (isChunkDone == true) {
            std::string processedChunk = "";

            if (currentMode == 1) {
                char lookahead = 'x';
                if (isDecrypting == 0) {
                    for (int nextIdx = i + 1; nextIdx < fullText.length(); nextIdx++) {
                        char nextC = fullText[nextIdx];
                        if ((nextC >= 'a' && nextC <= 'z') || (nextC >= 'A' && nextC <= 'Z')) {
                            lookahead = tolower(nextC);
                            break;
                        }
                    }
                } else {
                    for (int nextIdx = i + 1; nextIdx < fullText.length(); nextIdx++) {
                        char nextC = fullText[nextIdx];
                        if ((nextC >= 'a' && nextC <= 'z') || (nextC >= 'A' && nextC <= 'Z')) {
                            char encLookahead = tolower(nextC);
                            int foundIndex = 0;
                            for (int k = 0; k < 26; k++) {
                                if (encLookahead == monoKey[k]) foundIndex = k;
                            }
                            lookahead = 'a' + foundIndex;
                            break;
                        }
                    }
                }
                shift = lookahead - 'a';
                if (shift < 0 || shift > 25) shift = 23;

                for (int j = 0; j < currentChunk.length(); j++) {
                    char c = currentChunk[j];

                    if (isDecrypting == 0) {
                        if (c >= 'a' && c <= 'z') {
                            int shifted = c + shift;
                            if (shifted > 'z') shifted = shifted - 26;
                            processedChunk = processedChunk + (char)shifted;
                        } else if (c >= 'A' && c <= 'Z') {
                            int shifted = c + shift;
                            if (shifted > 'Z') shifted = shifted - 26;
                            processedChunk = processedChunk + (char)shifted;
                        } else {
                            processedChunk = processedChunk + c;
                        }
                    } else {
                        if (c >= 'a' && c <= 'z') {
                            int shifted = c - shift;
                            if (shifted < 'a') shifted = shifted + 26;
                            processedChunk = processedChunk + (char)shifted;
                        } else if (c >= 'A' && c <= 'Z') {
                            int shifted = c - shift;
                            if (shifted < 'A') shifted = shifted + 26;
                            processedChunk = processedChunk + (char)shifted;
                        } else {
                            processedChunk = processedChunk + c;
                        }
                    }
                }

                QString log = "Block ";
                log = log + QString::number(blockNum);
                log = log + " (Caesar)\nTarget Chunk: ";
                log = log + QString::fromStdString(currentChunk);
                log = log + "\nShift: " + QString::number(shift);
                log = log + (isDecrypting == 0 ? "\nEncrypted: " : "\nDecrypted: ");
                log = log + QString::fromStdString(processedChunk) + "\n----------------\n";

                result.stepLogs += log;
                currentMode = 2;
            }
            else if (currentMode == 2) {
                for (int j = 0; j < currentChunk.length(); j++) {
                    char c = currentChunk[j];
                    if (isDecrypting == 0) {
                        if (c == 'a') processedChunk = processedChunk + monoKey[0];
                        else if (c == 'b') processedChunk = processedChunk + monoKey[1];
                        else if (c == 'c') processedChunk = processedChunk + monoKey[2];
                        else if (c == 'd') processedChunk = processedChunk + monoKey[3];
                        else if (c == 'e') processedChunk = processedChunk + monoKey[4];
                        else if (c == 'f') processedChunk = processedChunk + monoKey[5];
                        else if (c == 'g') processedChunk = processedChunk + monoKey[6];
                        else if (c == 'h') processedChunk = processedChunk + monoKey[7];
                        else if (c == 'i') processedChunk = processedChunk + monoKey[8];
                        else if (c == 'j') processedChunk = processedChunk + monoKey[9];
                        else if (c == 'k') processedChunk = processedChunk + monoKey[10];
                        else if (c == 'l') processedChunk = processedChunk + monoKey[11];
                        else if (c == 'm') processedChunk = processedChunk + monoKey[12];
                        else if (c == 'n') processedChunk = processedChunk + monoKey[13];
                        else if (c == 'o') processedChunk = processedChunk + monoKey[14];
                        else if (c == 'p') processedChunk = processedChunk + monoKey[15];
                        else if (c == 'q') processedChunk = processedChunk + monoKey[16];
                        else if (c == 'r') processedChunk = processedChunk + monoKey[17];
                        else if (c == 's') processedChunk = processedChunk + monoKey[18];
                        else if (c == 't') processedChunk = processedChunk + monoKey[19];
                        else if (c == 'u') processedChunk = processedChunk + monoKey[20];
                        else if (c == 'v') processedChunk = processedChunk + monoKey[21];
                        else if (c == 'w') processedChunk = processedChunk + monoKey[22];
                        else if (c == 'x') processedChunk = processedChunk + monoKey[23];
                        else if (c == 'y') processedChunk = processedChunk + monoKey[24];
                        else if (c == 'z') processedChunk = processedChunk + monoKey[25];
                        else if (c >= 'A' && c <= 'Z') {
                            int index = 0;
                            for (char alpha = 'A'; alpha <= 'Z'; alpha++) {
                                if (c == alpha) {
                                    char sub = monoKey[index];
                                    processedChunk = processedChunk + (char)toupper(sub);
                                }
                                index = index + 1;
                            }
                        } else {
                            processedChunk = processedChunk + c;
                        }
                    } else {
                        if (c >= 'a' && c <= 'z') {
                            int foundIndex = 0;
                            for (int k = 0; k < 26; k++) {
                                if (c == monoKey[k]) foundIndex = k;
                            }
                            char decryptedChar = 'a' + foundIndex;
                            processedChunk = processedChunk + decryptedChar;
                        } else if (c >= 'A' && c <= 'Z') {
                            int foundIndex = 0;
                            for (int k = 0; k < 26; k++) {
                                char upperKey = toupper(monoKey[k]);
                                if (c == upperKey) foundIndex = k;
                            }
                            char decryptedChar = 'A' + foundIndex;
                            processedChunk = processedChunk + decryptedChar;
                        } else {
                            processedChunk = processedChunk + c;
                        }
                    }
                }

                QString log = "Block ";
                log = log + QString::number(blockNum);
                log = log + " (Monoalphabetic)\nTarget Chunk: ";
                log = log + QString::fromStdString(currentChunk);
                log = log + (isDecrypting == 0 ? "\nEncrypted: " : "\nDecrypted: ");
                log = log + QString::fromStdString(processedChunk) + "\n----------------\n";

                result.stepLogs += log;
                monoCount = monoCount + 1;

                if (monoCount == 3) {
                    std::string newKey = "";
                    newKey = newKey + monoKey[25];
                    for (int k = 0; k < 25; k++) {
                        newKey = newKey + monoKey[k];
                    }
                    monoKey = newKey;
                    monoCount = 0;
                    result.stepLogs += "-> Mono key rotated!\n----------------\n";
                }
                currentMode = 1;
            }

            result.finalOutput += processedChunk;
            currentChunk = "";
            charCounter = 0;
            blockNum = blockNum + 1;
        }
    }
    return result;
}