#include <iostream>

using namespace std;

void lesson8f1();
void lesson8f2();
char *Concat(const char *FirstStr, const char *SecondStr);
void lesson8f3();

void lesson8 ()
{
    lesson8f3();
}

void lesson8f1()
{
    const char *Source = "123456789abcdef";

    int Size = 0;

    //while(Source[Size] != '\0') {
    while(Source[Size]) {
        cout << Source[Size] << endl;
        Size++;
    }

    cout << sizeof (Source) << endl;
}

void lesson8f2 ()
{
    cout << Concat("as you"," wish!") << endl;
}

char *Concat(const char *FirstStr, const char *SecondStr)
{
    int Size1 = 0, Size2 = 0;

    while (FirstStr[Size1++] != '\0');
    while (SecondStr[Size2++] != '\0');

    char *Result = new char[Size1 + Size2 -1];

    int i, j;
    for(i = 0; Result[i] = FirstStr[i]; i++);
    for(j = 0; Result[i] = SecondStr[j]; i++, j++);

    return Result;
}

void lesson8f3 ()
{
    int (*Arr)[4][2];
    Arr = new int[3][4][2];



}
