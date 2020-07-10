//
// Created by Justin Park on 2020/07/09.
//

#include <iostream>

using namespace std;

class IErrorLog {
public:
    virtual bool reportError(const char* errorMessage) =0;
    virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog {
public:
    bool reportError(const char *errorMessage) override {
        cout <<"Writing error to a file" << endl;
        return true;
    }
};

class ConsoleErrorLog : public IErrorLog {
public:
    bool reportError(const char *errorMessage) override {
        cout << "Writing error to a console" << endl;
        return true;
    }
};

void doSomething(IErrorLog & log) {
    log.reportError("Runtime Erorr!!");
}


int main_44() {

    FileErrorLog file_log;
    ConsoleErrorLog console_Log;

    doSomething(file_log);
    doSomething(console_Log);

    return 0;
}