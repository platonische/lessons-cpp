#include <iostream>

using namespace std;

void lesson6f1()
{

    setlocale(LC_ALL, "Russian");

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

}

void lesson6f2()
{
    string s;

    char Mass1[10];
    int Mass2[] = {1,2,3};
    int Mass3[10] = {1,2,3};
    cout << sizeof(Mass1) << endl;
    cout << sizeof(Mass2) << endl;
    cout << sizeof(Mass3) << endl;
//    cin >> s;




    char *pMas2 = new char[10];

    delete [] pMas2;
}

void lesson6f3()
{
    int n, total;

    cout << "Enter digit for array size: ";
    cin >> n;

    int* pM;
    pM = new int[n];

    total = sizeof(pM);
    //total = n;

    cout << total << endl;

    for (int i = 0; i < total; i++) {
        pM[i] = i;
    }

    cout << "Dynamic array: " << endl;
    for (int i = 0; i < total; i++) {
        cout << pM[i] << endl;
    }

    delete [] pM;

    cout << "Trash array: " << endl;
    for (int i = 0; i < total; i++) {
        cout << pM[i] << endl;
    }

    pM = NULL;
}

void lesson6f4()
{
    cout << "F4" << endl;

    int n, total;
    n = 5;
    int* pM;
    pM = new int[n];

    total = n;

    for (int i = 0; i < total; i++) {
        pM[i] = i;
    }

    for (int i = 0; i < total; i++) {
        cout << pM[i] << endl;
    }

    for (int i = 0; i < total; i++) {
        cout << *(pM+i) << endl;
    }

    delete [] pM;
    pM = NULL;

}

void lesson6f5()
{
    const char *String1 = "ewrew";
    char *String2 = {"ewrew"};
    char *String3("ewrew");

    char str[] = "1234";
    cout << sizeof(str) << endl;
    cout << sizeof(String1) << endl;
    cout << sizeof(String2) << endl;
    cout << sizeof(String3) << endl;
}
