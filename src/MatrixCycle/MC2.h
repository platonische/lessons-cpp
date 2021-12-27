#ifndef MC2_H
#define MC2_H


#include <iostream>
#include <string>

using namespace std;

class MC2
{
private:
    int* _Array = new int ;
    int _Digit;
    int _Max;
    int _Counter = 0;

    int colCorrect = 0;
    int rowCorrect = 0;


    void horse(int,int,int,int);
public:
    MC2(int);
    void __toString();
    void fillArray();
};

#endif // MC2_H
