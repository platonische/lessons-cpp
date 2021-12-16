#include <iostream>

using namespace std;


void lesson11f1();
void lesson11f2();
void lesson11f3();
void lesson11f4();
void lesson11f5();
float fDublicate(float);
union Float;
float fDublicate2(Float);
float fDublicate3(Float);


union Float {
    float Data;
    struct {
        unsigned int mant:23;
        unsigned int exp:8;
        unsigned int sign:1;
    };
};


template <class ABC>
ABC mySumm(ABC A, ABC B)
{
    ABC Result;
    Result.Value = A.Value + B.Value;
    return Result;
}

template <class ABC, class DEF>
ABC mySumm(ABC A, DEF B)
{
    ABC Result;
    Result.Value = A.Value + B.Value;
    return Result;
}

template <class ABC, class DEF>
DEF mySumm(ABC A, DEF B)
{
    DEF Result;
    Result.Value = A.Value + B.Value;
    return Result;
}


struct Values{
  int Value;
};
struct V2{
  int Value;
};

void lesson11()
{
    lesson11f3();
}

void lesson11f1()
{
    struct Data{
        int Data;
        int a : 10;
        int b : 2;
        int c : 16;
    };

    Data d;
    d.a = 10;

    union AUnion {
//        long long Longs[2];
        int Ints[2];
        int Int4[1];
        char Chars[9];
    };

    AUnion Au;

    cout << "sizeof(Au):\t\t" << sizeof(AUnion) << endl;
//    cout << "sizeof(Au.Longs):\t" << sizeof(Au.Longs) << endl;
    cout << "sizeof(Au.Ints):\t" << sizeof(Au.Ints) << endl;
    cout << "sizeof(Au.Ints):\t" << sizeof(Au.Int4) << endl;
    cout << "sizeof(Au.Chars):\t" << sizeof(Au.Chars) << endl;

    cout << "&Au:\t\t" << &Au << endl;
//    cout << "&Au.Longs:\t" << &Au.Longs << endl;
    cout << "&Au.Ints:\t" << &Au.Ints << endl;
    cout << "&Au.Chars:\t" << &Au.Chars << endl;


}

void lesson11f2()
{
    float a = 12.5;
    cout << fDublicate(a) << endl;

    Float e;
    e.Data = 12.5;
    cout << fDublicate3(e) << endl;
    cout << fDublicate2(e) << endl;
    cout << fDublicate3(e) << endl;
}

float fDublicate(float a) {
    return a+=a;
}

float fDublicate2(Float theSource) {
    Float Matrix = {theSource};
    Matrix.exp++;
    return Matrix.Data;
}

float fDublicate3(Float theSource) {
    Float Matrix = {theSource};
    Matrix.sign = !Matrix.sign;
    return Matrix.Data;
}


void lesson11f3()
{
    Values x,y,z;
    x.Value = 3;
    y.Value = 7;
    z = mySumm(x,y);
    cout << z.Value << endl;

    V2 a,b,c;
    a.Value = 3;
    b.Value = 7;
    c = mySumm(a,b);
    cout << c.Value << endl;

    x = mySumm(y,z);
    cout << x.Value << endl;

}
