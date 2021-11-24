#include <iostream>

using namespace std;

    void HW4()
    {
        int intVar = 0x12345678;

        int *pIVar = (int*)&intVar;
        short *pSVar = (short*)&intVar;
        char *pCVar = (char*)&intVar;

        cout << *pIVar << endl;
        cout << *pSVar << endl;
        cout << *pCVar << endl;

//        lineFunc();
    }

    void lesson4()
    {

    //    int x = 15;

    //    int *pVar0;

    //    char *pMemory = (char *)0xab8080;

    //    char Var, *pVar = &Var;

    //    char *pVar1 = pVar;

    //    char ch = "d";

    //    char ch = 'c';
    //    char* pch = &ch;

    //    cout << ch << endl;
    //    cout << (int*)&ch << endl;
    //    cout << (int*)pch << endl;
    //    cout << *pch << endl;


    //    char* pV1 = pch;
    //    cout << *pV1 << endl;

    //    char* pVar1 = NULL;

    //    if (pVar1 == NULL) {
    //        cout << "NULL" << endl;
    //    }
    //    cout << *pVar1 << endl;


        int a = 0, b = 0;
        //cout << hex;
        cout << (int* )&a - (int*)&b << endl;
        cout << (int* )&b << endl;
        cout << (int* )&a << endl;


    }


