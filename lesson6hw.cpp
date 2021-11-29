#include <iostream>

using namespace std;

/**
 * Написать функцию, принимающую
 * в качестве параметра массив целых чисел
 * и выводящая его на экран в виде столбца
 */
void Print (char Input[]);
void Print (int Input[]);

/**
 * Наисать функцию, принимающую указатель на строку
 * и выводящую каждый второй символ начиная с конца строки
 *
 * @brief PrintString
 * @param InputString
 */
void PrintString (char *Input);

void line();

void initLesson6Hw()
{
    char Arr[] = {'1','2','3','4','5','6','7','8','9','a','\0'};
    Print(Arr);
    line();

    int ArrInt[] = {1,2,3,4,5,6,7,8,9,'\0'};
    Print(ArrInt);
    line();

    line();

    PrintString(Arr);
    line();

    char* Arr2 = new char[3];
    Arr2[0] = 'a';
    Arr2[1] = 'b';
    Arr2[2] = 'c';
    PrintString(Arr2);
}

void Print (char Input[])
{
    cout << "Массив на входе: " << Input << endl;

    for (int i = 0;; i++) {
        if (Input[i]=='\0') break;
        cout << Input[i] << endl;
    }
}

void Print (int Input[])
{
    cout << "Массив на входе: " << Input << endl;

    for (int i = 0; Input[i] != '\0'; i++) {
        cout << Input[i]  << endl;
    }
}

void PrintString (char *Input)
{
    cout << "Массив на входе: " << Input << endl;

    int i,c;

    for (i = 0; Input[i] != '\0'; i++);

    c = i-1;

    for (c; c >= 0; c-=2){
        cout << Input[c]  << endl;
    }
}


void line()
{
    cout << "|--------------------------------------------------|" << endl;
}

