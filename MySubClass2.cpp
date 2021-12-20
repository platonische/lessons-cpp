#include "MySubClass2.h"

MySubClass2::MySubClass2(int Input): MySubClass1(Input)
{
    bar = 20;
    _Dog->setName("Dog new");
    _Dog->setSpace(false);
}
