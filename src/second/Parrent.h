#ifndef PARRENT_H
#define PARRENT_H

#include <iostream>
using namespace std;

class Parrent {

    void virtual executePr() {
        cout << "I'm Private Parrent\n";
    };
    int a;
public:
    Parrent(int X):Parrent(){
        this->a = X;
    }
    Parrent(){
        cout << "Parrent construction();\n";
    }
    void virtual execute(){
        cout << "I'm Parrent\n";
    }
    void ppp(){
        cout << "I'm ppp\n";
    }
    void virtual executePrPub() {
        executePr();
    };
    virtual ~Parrent(){
        cout << "Destructor Parrent\n";
    }



};

#endif // PARRENT_H
