#ifndef MYSUBCLASS1_H
#define MYSUBCLASS1_H

#include <string>
#include "MyClass1.h"

class MySubClass1
{
public:
    MySubClass1(int);
    string printDogInto();

protected:
    int foo = 0;
    MyClass1* _Dog;

};

#endif // MYSUBCLASS1_H
