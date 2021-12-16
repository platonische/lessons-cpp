#include <iostream>
#include <string>
#include <math.h>
#include "firstLessons.cpp"
#include "lesson4.cpp"
#include "lesson5.cpp"
#include "lesson6.cpp"
#include "lesson6hw.cpp"
#include "lesson7.cpp"
#include "lesson8.cpp"
#include "lesson8hw.cpp"
#include "lesson9.cpp"
#include "lesson10.cpp"
#include "lesson11.cpp"
#include "MyClass1.h"

using namespace std;



int main()
{

//    lesson4();
//    HW4();

//    lesson5();
//    lesson5f2();
//    lesson5f3();
//    lesson5f4();
//    lesson5f5();
//    lesson6f1();
//    lesson6f2();
//    lesson6f3();
//    lesson6f4();
//    lesson6f5();
//    initLesson6Hw();

//    lesson7();
//    lesson8();
    //lesson8hw();
//    lesson9();
//    lesson10();
//    lesson11();


    MyClass1 A;
    A.setName("Dog N1");
    A.setMedal(12);
    A.setSpace(true);

    MyClass1 B;
    B.setName("Dog N2");
    B.setMedal(8);

    cout << A.__toString() << B.__toString();

    return 0;
}
