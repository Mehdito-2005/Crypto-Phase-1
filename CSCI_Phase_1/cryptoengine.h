#ifndef CRYPTOENGINE_H
#define CRYPTOENGINE_H

#include <string>
#include <QString>


struct CryptoResult {
    std::string finalOutput;
    QString stepLogs;
};

class CryptoEngine {
public:

    static CryptoResult processText(const std::string& fullText, int isDecrypting);
};

#endif