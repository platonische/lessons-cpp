#ifndef CORE_H
#define CORE_H

#include "pChar.h"

typedef struct {
    pChar* inputCli;
    pChar* inputBt;
} inputStruct;

typedef struct {
    pChar* logCli;
    pChar* logBt;
    pChar* logFile;
} logStruct;


class Core
{
public:
    Core(){

    };

    void setup(){
        log.logBt =  new pChar;
        log.logCli =  new pChar;
        log.logBt->set("Text for BT");
        log.logCli->set("Text for Cli");
    }
    void loop();


    inputStruct input;
    logStruct log;

};

#endif // CORE_H
