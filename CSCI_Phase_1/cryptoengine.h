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
    // We use a static method so we don't have to instantiate the class
    static CryptoResult processText(const std::string& fullText, int isDecrypting);
};

#endif // CRYPTOENGINE_H