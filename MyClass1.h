#ifndef MYCLASS1_H
#define MYCLASS1_H

#include <string>

using namespace std;

class MyClass1
{
public:
    MyClass1();
    ~MyClass1();

    string __toString();

    char* getName();
    int getMedal();
    bool getSpace();
    int getId();

    void setName(char*);
    void setMedal(int);
    void setSpace(bool);

    static int someStatic;

private:
    bool _space = 0;
    int _medal = 0;
    char* _name = "";
    int _id;
};

#endif // MYCLASS1_H
