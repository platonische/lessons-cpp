#include <iostream>

using namespace std;

typedef struct MyStruct {
    int X;
    int Y;
} aliasB;

void lesson9f1();

void lesson9()
{
    lesson9f1();
}

void lesson9f1()
{
    MyStruct S;
    S.X = 10;
    S.Y = 20;

    aliasB B;
    B.X = 5;
    B.Y = 2;

    cout << S.X << endl;
    cout << B.Y << endl;

}
