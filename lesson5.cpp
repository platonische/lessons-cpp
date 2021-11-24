#include <iostream>

using namespace std;

void lesson5 ()
{
    int a=2,b,c;
    b = a*3;
    c = b+a;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

}

int lesson5f2()
{
    int a='w';
    float b=3.2;
    char c='w';
    short d=3;
    bool e=true;
    double f=32;

    cout << "a=" << a << endl;
    return 0;
}

int lesson5f3()
{
    int c = 32;

    for (int i = 0; i < c; i++) {
        char ai = 0;
    }

    char l1 = 0, l2 = 0, l3 = 0, l4 = 0;

    cout << "Введите 4 буквы" << endl;
    cin >> l1 >> l2 >> l3 >> l4;
    cout << l1 << l2 << l3 << l4 << endl;

    return 0;
}

int lesson5f4()
{
    int c = 5;

    int s = 0;
    char* current = (char *)&s;





    cout << "Введите буквы, "<< c << " шт."  << endl;

    for (int i = 0; i < c; i++) {
        cin >> *(current + i);
    }

    cout << "вы Ввели" << endl;

    for (int i = 0; i < c; i++) {
        //cout << *(current ++);
        cout << *(current +i);
    }

    cout << endl;

    return 0;
}

int lesson5f5()
{
    int v = 0;

    char* r = (char*)&v;

    char* r0 = (char*)(r + 0);
    char* r1 = (char*)(r + 1);
    char* r2 = (char*)(r + 2);
    char* r3 = (char*)(r + 3);

    char* v0 = (char*)(&v + 0);
    char* v1 = (char*)(&v + 1);
    char* v2 = (char*)(&v + 2);
    char* v3 = (char*)(&v + 3);

//    cout << *(r0) << endl;
//    cout << *(r1) << endl;
//    cout << *(r2) << endl;
//    cout << *(r3) << endl;

    *r0 = 'a';
    *r1 = 'b';
    *r2 = 'c';
    *r3 = 'd';

    cout << "HEX:" << endl;

    printf("%x\n",*(r0));
    printf("%x\n",*(r1));
    printf("%x\n",*(r2));
    printf("%x\n",*(r3));


    for (int i = 0; i<4; i++) {
        cout << *(r+i);
        cout << "\tHEX: ";
        printf("%x\n",*(r+i));
    }


    cout << "-----------------------------------------------------" << endl;

    for (int i = 0; i<4; i++) {
        cin >> *(r+i);
    }

    for (int i = 0; i<4; i++) {
        cout << *(r+i);
        cout << "\tHEX: ";
        printf("%x\n",*(r+i));
    }

    cout << "-----------------------------------------------------" << endl;
}
