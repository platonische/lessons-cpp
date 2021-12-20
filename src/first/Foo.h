#ifndef FOO_H
#define FOO_H

#include <iostream>

using namespace std;

class Foo
{


private:


public:
    Foo(int size){
        pVar = new int[size];
        pVar[0] = 20;
        pVar[1] = 99;
        cout << "Память выделили" << endl;
    };
    ~Foo(){
        delete[] pVar;
        pVar = NULL;
        cout << "Память очищена" << endl;
    };

    int *pVar;
};

#endif // FOO_H
