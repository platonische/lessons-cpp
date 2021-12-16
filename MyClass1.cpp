#include "MyClass1.h"

int MyClass1::someStatic = 0;

MyClass1::MyClass1()
{
    someStatic++;
    _id = someStatic;
}

char* MyClass1::getName()
{
    return _name;
}
int MyClass1::getMedal()
{
    return _medal;
}
bool MyClass1::getSpace()
{
    return _space;
}
int MyClass1::getId()
{
    return _id;
}


void MyClass1::setName(char* Name)
{
    _name = Name;
}
void MyClass1::setMedal(int Medal)
{
    _medal = Medal;
}
void MyClass1::setSpace(bool Space)
{
    _space = Space;
}

string MyClass1::__toString()
{
    string str;
    str += "The dog ";
    str += _name;

    str += " (id:";
    str += to_string(_id);
    str += ")";



    str += " has";
    if(!_space){
        str += "n't";
    }

    str += " itself space.\n";

    str += "It has medals:\t";
    str += to_string(_medal);
    str += "\n";


    str += "Count class's elements:\t";
    str += to_string(someStatic);
    str += "\n";
    str += "-----------------------------------\n";

    return str;
}

~MyClass1::MyClass1()
{

}
