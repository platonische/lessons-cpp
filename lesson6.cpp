#include <iostream>
//#include <QTextStream>

using namespace std;

void lesson6f1()
{

    setlocale(LC_ALL, "Russian");
//    QTextStream qin(stdin);
//    QTextStream qout(stdout);

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
    cin >> s;
    cout << s << endl;

}
