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
#include "MySubClass1.h"
#include "MySubClass2.h"
#include "src/first/Base.h"
#include "src/first/Foo.h"
#include "src/first/Bar.h"
#include "src/first/ClassA.h"
#include "src/first/ClassB.h"

#include "src/second/Parrent.h"
#include "src/second/Child.h"
#include "src/second/A.h"
#include "src/second/B.h"

using namespace std;



int main()
{


Parrent* pObj = new Child();
//Parrent* pObj = new Parrent();
pObj->execute();
pObj->executePrPub();
pObj->~Parrent();


//  Foo* pA;
//    {
//        Foo A(56);
//        cout << A.pVar[0] << endl;
//        pA = &A;
//        cout << pA->pVar[0] << endl;
//        //A.~Foo();
//    }
//    cout << pA->pVar[0] << endl;

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


//    MyClass1 A;
//    A.setName("Dog N1");
//    A.setMedal(12);
//    A.setSpace(true);

//    MyClass1 B;
//    B.setName("Dog N2");
//    B.setMedal(8);

//    cout << A.__toString() << B.__toString();

//    MySubClass1 A1(20);
//    MySubClass2 A2(150);

//    cout << A1.foo << endl;

//    cout << A2.foo << endl;
//    cout << A2.bar << endl;

//    cout << A1.printDogInto();
//    cout << A2.printDogInto();

    return 0;
}
