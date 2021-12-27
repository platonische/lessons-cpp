#include "MC2.h"

MC2::MC2(int N)
{
   _Digit = N;
   _Max = N*N;
    _Array = new int [_Max];
    fillArray();
}


void MC2::fillArray(){
    this->horse(0,0,_Digit,1);
}
// znak 1 + / 0 -
void MC2::horse (
        int xPos,
        int yPos,
        int size,
        int znak
        )
{


    // Первая клетка
    _Counter++;
    _Array[yPos*_Digit+xPos] = _Counter;

    //Клетки по горизонтали
    for(int i = 0; i<size-1; i++)
    {
        xPos += znak;
        _Counter++;
        _Array[yPos*_Digit+xPos] = _Counter;

    }

    //Клетки по вертикали
    for (int i=1; i<size; i++){
        _Counter++;
        yPos += znak;
        _Array[yPos*_Digit+xPos] = _Counter;

    }

    //Рекурсия пока не досчитаемся до счетчика
    if (_Counter<_Max){
        xPos = xPos-znak;
        yPos = yPos;
        size -= 1;
        znak *= -1;
        this->horse(xPos,yPos,size,znak);
    }
}



void MC2::__toString(){
    cout << "__toString()\n";
    int j = 1;
    for (int i=0; i<(_Digit)*(_Digit); i++, j++) {
        cout << *(_Array+i) << "\t";
        if(j == _Digit) {
            cout << "\n";
            j = 0;
        }
    }
}

