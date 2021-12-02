#include <iostream>

using namespace std;

void lesson7f1();
void lesson7f2();
void lesson7f3();
void lesson7f4();
void lesson7f5();

void lesson7()
{
    lesson7f5();
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
