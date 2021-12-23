#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include "Parrent.h"
using namespace std;

class Child : public Parrent {

    void executePr() {
        //Parrent::executePr();
        cout << "I'm Private Child\n";
    };
public:
    Child(){

    };
    void virtual execute() {
        Parrent::execute();
        cout << "I'm Child\n";
    };
    void virtual executePrPub() {
        executePr();
    };
    virtual ~Child(){
        cout << "Destructor Child\n";
    }

};

#endif // CHILD_H
