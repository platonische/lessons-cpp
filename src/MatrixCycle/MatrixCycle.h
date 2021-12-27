#ifndef MATRIXCYCLE_H
#define MATRIXCYCLE_H

#include <iostream>
#include <string>

using namespace std;

class MatrixCycle
{
private:
    int* _Array = new int ;
    int _Digit;
    int _Max;
    int _Counter = 0;

    int colCorrect = 0;
    int rowCorrect = 0;


    void fillLine(int,bool,bool);
public:
    MatrixCycle(int);
    void __toString();
    void fillArray();
};

#endif // MATRIXCYCLE_H
