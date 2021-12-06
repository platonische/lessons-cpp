#include <iostream>

using namespace std;

void lesson7f1();
void lesson7f2();
void lesson7f3();
void lesson7f4();
void lesson7f5();
void lesson7HW1();

unsigned short int counter = 0;

void lesson7()
{
    lesson7HW1();
}

void lesson7f1()
{

    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{7,8},{9,1},{2,3}};
    int C[2][2];

    for (int i=0; i<2; i++) {

        for (int j=0; j<2; j++) {

            C[i][j] = 0;

            for (int k=0; k<3; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }

            cout << C[i][j] << " ";
        }

        cout << endl;

    }

}

void lesson7f2()
{
    int M[8] = {1,2,3,4,5,6,7,8};
    int Summ = 0;
    double SArr = 0;

    for (int i=0; i<8; i++) {
        Summ += M[i];
    }

    SArr = (double)Summ/8;
    cout << SArr << endl;
}

void lesson7f3()
{
    int M[8] = {1,2,3,4,5,6,7,8};
    double SArr = 0;

    for (int i=0; i<8; i++) {
        SArr += (double)M[i]/8;
    }

    cout << SArr << endl;
}

void lesson7f4()
{
    int Mass[9] = {1,2,3,4,5,6,7,8,9};
    int m = 3, n = 3;

    for (int i=8; i>=0; i--,n--) {

        if (n == 0) {
            n = m;
            cout << endl;
        }

        cout << Mass[i] << "\t";

    }
}

void lesson7f5()
{
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int Max = A[0][0];
    for (int i=0; i<3; i++) {

        for (int j=0; j<3; j++) {

            if (A[i][j] > Max) {
                Max = A[i][j];
            }

        }
    }

    cout << Max << endl;

}


/**
 * Поменять местами минимальное и максимальное значение
 *
 * @brief outMass
 * @param Arr
 * @param deep
 */
void outMass(int *Arr, int deep)
{

    counter++;

    cout << "Прогон: " << counter << " ------------------------------- " << endl;

    for (int i=0; i<deep; i++) {
        for (int j=0; j<deep; j++) {
            cout << *(Arr+i*deep+j) << "\t";
        }
        cout << endl;
    }

    cout << "------------------------------- " << " Конец: " << counter << endl;

}

int doChangeMass(int *Arr, int deep)
{
    int Max = *Arr, Min = *Arr;
    int MaxInd = 0, MinInd = 0;
    for (int i=0; i<deep; i++) {
        for (int j=0; j<deep; j++) {
            if (Max < *(Arr+i*deep+j)) {
                Max = *(Arr+i*deep+j);
                MaxInd = i*deep+j;
            }
            if (Min > *(Arr+i*deep+j)) {
                Min = *(Arr+i*deep+j);
                MinInd = i*deep+j;
            }
        }
    }
    *(Arr+MinInd) = Max;
    *(Arr+MaxInd) = Min;
    return 0;
}

int doChangeMass2(int *Arr, int deep)
{
    int *Max = Arr, *Min = Arr;

    for (int i=0; i<deep; i++) {
        for (int j=0; j<deep; j++) {
            if (*Max < *(Arr+i*deep+j)) {
                Max = Arr+i*deep+j;
            }
            if (*Min > *(Arr+i*deep+j)) {
                Min = Arr+i*deep+j;
            }
        }
    }

    // Интересная манипуляция с 2 яцейками и расчетами для 2 единиц
    *(Max) = *(Max) - *(Min);   // В max положили разницу max-min
    *(Min) = *(Max) + *(Min);   // В min положили разницу + мин => max
    *(Max) = *(Min) - *(Max);   // в max положили max - разницу => min

    return 0;
}


//Доработать т.к. надо возвращать данные
int doChangeMass3(int *Arr, int deep)
{
    int Max = Arr[0], Min = Arr[0];

    for (int i=0; i<deep; i++) {
        for (int j=0; j<deep; j++) {
            if (Max < Arr[i*deep+j]) {
                Max = Arr[i*deep+j];
            }
            if (Min > Arr[i*deep+j]) {
                Min = Arr[i*deep+j];
            }
        }
    }

    // Интересная манипуляция с 2 яцейками и расчетами для 2 единиц
    Max = Max - Min;   // В max положили разницу max-min
    Min = Max + Min;   // В min положили разницу + мин => max
    Max = Min - Max;   // в max положили max - разницу => min

    return 0;
}


void lesson7HW1()
{

    int Mass[3][3] = {{11,2,36},{14,15,61},{27,82,29}};
    int deep = 3;
    outMass(&Mass[0][0], deep);
    //doChangeMass(&Mass[0][0], deep);
    //doChangeMass2(&Mass[0][0], deep);
    doChangeMass2((int *)Mass, deep);
    //doChangeMass3((int *)Mass, deep);
    outMass(&Mass[0][0], deep);


}
