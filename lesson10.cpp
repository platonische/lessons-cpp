#include <iostream>

using namespace std;

void pPrint(int *, int);
void lesson10f1();
void lesson10f2();
void lesson10f3();
void lesson10f4();
void TwoInt(int, int);
void lTwoInt(int &, int &);
void TwoInt(int*, int*);

void lesson10()
{
    lesson10f3();
    lesson10f4();
}

void lesson10f1()
{
    int* pa;
    int A = 12;
    pa = new (int);
    *pa = 5;
    pPrint(pa, A);

    cout << pa << endl;
    cout << &pa << endl;
    cout << &*pa << endl;

//    cout << A << endl;
//    cout << &A << endl;

    delete pa;
    pa = NULL;
}

void pPrint(int *i, int B)
{
//    cout << *i << endl;
//    cout << i << endl;
//    cout << &i << endl;

//    cout << B << endl;
//    cout << &B << endl;


}

void lPrint(int & x)
{
    cout << x << endl;
    cout << &x << endl;
}

void lesson10f2()
{
    int a = 7;
    int &la = a;

    cout << a << endl;
    cout << &la << endl;

    lPrint(la);
}

void lesson10f3()
{
    int A = 1, B = 2;
    int *pA = &A, *pB = &B;
    TwoInt(pA,pB);
    TwoInt(A,B);
    TwoInt(pA,pB);
    TwoInt(A,B);
}

void TwoInt(int X, int Y)
{
    X*=2;
    Y*=2;

    cout << X << " - " << Y << endl;
}

void lTwoInt(int & X, int & Y)
{
    X*=2;
    Y*=2;

    cout << X << " - " << Y << endl;
}

void TwoInt(int *X, int *Y)
{
    *X*=2;
    *Y*=2;

    cout << *X << " - " << *Y << endl;
}

void lesson10f4()
{
    int A = 1, B = 2;
    int &lA = A, &lB = B;

    int *pA = &A, *pB = &B;

    TwoInt(pA,pB);
    lTwoInt(lA,lB);
    TwoInt(pA,pB);
    lTwoInt(lA,lB);
}
