#include "MySubClass1.h"



MySubClass1::MySubClass1(int Input)
{
    foo = Input;
    _Dog = new MyClass1();
    _Dog->setName("Dog N1");
    _Dog->setMedal(foo);
    _Dog->setSpace(true);
}

string MySubClass1::printDogInto()
{
    return _Dog->__toString();
}
