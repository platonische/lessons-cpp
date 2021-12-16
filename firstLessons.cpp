#include <iostream>
#include <math.h>


using namespace std;

// declaration
void Print();
int Galua(int A, int B);
void lesson4();
// ------------

void Alesson2()
{
    int i;
    for (i=0; i<20; i--) {
        printf("*");
    }

}


//void MyFunc(int x, int y = 0)
//{
//    x *= 2;
//    cout << x;
//}

int st(int digit, int st)
{
    if (st > 0) {
        int result = 1;
        for (int i = 1; i <= st; i++){
            result = result * digit;
        }
       return result;
    }

    //cout << "Error ";
    return 0;
}

int foo ()
{
    int c = 4;
    int r = 0;

    for (int i = 1; i <= c; i++){

        if (i == 2) {
            //cout << "Это i="<<i<<" - ";
            r = 0;
        }
        if (i >= 2) {
            r = 1;
        }

        r = 10;

        r = r+i;
        cout << i << endl;
        cout << "Результат: " << r << endl;
    }

    return 0;
}

int factorial()
{
    int f;
    long long result = 1;

    cout << "Input count number to factorialize it: ";
    cin >> f;

    while (f <= 0) {
        cout << "Переменная меньше 1" << endl;
        cout << "Input count number to factorialize it: ";
        cin >> f;
    }


    for (int i = 1; i <= f; i++) {
        // Factarial
        result *= i;
        cout << i << " -> " << result << endl;
    }
    cout << "Result is: " << result << endl;
    return 0;
}


int sqEx()
{
    int a;
    int b;
    int c;
    double x1, x2;


    cout << "Решаем кв.уравнение a*x² + b*x + c = 0" << endl;

    cout << "Введите значение коэффициентов" << endl;

    cout << "a=" << endl;
    cin >> a;
    cout << "b=" << endl;
    cin >> b;
    cout << "c=" << endl;
    cin >> c;

    cout << "Решаем кв уравнение "<< a <<"x² + " << b << "x + "<<c<<" = 0" << endl;

    //Надо найти дискрименант

    int d;
    d = st(b,2) - 4*a*c;

    //cout << "D=" << d << endl;

    if (d >= 0) {
        x1 = (-1*b + sqrt(d))/2*a;
        x2 = (-1*b - sqrt(d))/2*a;
        cout << "Ответ:" << endl;
        cout << "X1 = " << x1 << endl;
        if (d != 0) {
            cout << "X2 = " << x2 << endl;
        }
    } else {
        cout << "Ответ: уравнение не имеет решения, d < 0." << endl;
    }

    return 0;
}

int Factorial1 (int theX)
{
    if (theX==1) {
        return 1;
    }

    return theX * Factorial1(theX - 1);
}

int Factorial2 (int theX)
{
    if (theX>1) {
        return theX * Factorial2(theX - 1);
    }

    return 1;
}




int Galua(int A, int B)
{
    if (A==1 || B==1) {
        return A * B;
    }

    int R = Galua(A-1, B-1);
    return R + (A * B);
}

void Print()
{
    long n = 4;
    long long GS = Galua(n, n-2);
    cout << GS << endl;
}

void initFactorial()
{
    //    int x = 5;
    //    int result;
    //    result = Factorial1(x);
    //    cout << result;

    //    foo();
    //    lesson2();

    //        Print();
}
