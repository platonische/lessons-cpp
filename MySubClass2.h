#ifndef MYSUBCLASS2_H
#define MYSUBCLASS2_H

#include "MySubClass1.h"


class MySubClass2 : public MySubClass1
{
public:
    MySubClass2(int);
    int bar = 0;
};

#endif // MYSUBCLASS2_H
