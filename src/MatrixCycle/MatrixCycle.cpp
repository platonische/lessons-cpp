#include "MatrixCycle.h"

MatrixCycle::MatrixCycle(int N)
{
   _Digit = N;
   _Max = N*N;
    _Array = new int [_Max];
    fillArray();
}


void MatrixCycle::fillArray(){
//    for (int i = 0; i < _Max; i++) {
//        *(_Array+i)= i+1;
//    }

    this->fillLine(-1,false,false);
}


/**
 * @brief MatrixCycle::fillLine
 * @param endPos - стартовать с _Digit
 * @param iteration - стартовать с -1
 * @param startPos - стартовать с 0
 * @param b1 - что прибавляем/убавляем {0-начало+, 1-конец-}, стартовать с false {0 вправо, 1 влево}
 * @param b2 - смена направления {0-прямо,1-обратно}, стартовать с false {0 вниз, 1 вверх}
 */
void MatrixCycle::fillLine (
        int iteration = -1,
        bool b1 = false,
        bool b2 = false)
{
    // Существует 4 типа прохода(вправо, вниз, влево, вверх)
    // При помощи b1 и b2 типы соответствуют 00, 10, 11, 01

    bool d1 = !b1 && !b2;
    bool d2 = b1 && !b2;
    bool d3 = b1 && b2;
    bool d4 = !b1 && b2;

    //Счетчик итераций срабатывает в позиции 00
    if (d1) iteration+=1;

    //Счетчики просчета начального и конечного значение
    int startPos;
    int endPos;


    colCorrect = 0;
    rowCorrect = 0;

    int i;

    // 1 и 3 проход. Проход по строке
    if (d1 || d3) {

        //Просчет начального значения
        startPos=iteration;

        //Просчет конечного значения
        if(d1) endPos=_Digit-1 - iteration;
        else   endPos=_Digit-1 - (iteration + 1);

        //Вычисление строки (порядки)
        if (d1) rowCorrect = iteration * _Digit;
        if (d3) rowCorrect = (_Digit - (iteration+1)) * _Digit;

        cout<<"Позиции"<<startPos<<"-"<<endPos<<"\n";
        for (i = startPos; i <= endPos; i++){

            // Вычисление смещение колонки (единицы)
            if (d1) colCorrect = i;            //Прямое
            else colCorrect = endPos - (i);   //Обратное

            if (d3 && iteration>0) colCorrect++;

            // Считаем и заполняем
            _Counter++;
            cout<<_Counter<<"\t"<<rowCorrect+colCorrect<<"\n";
            _Array[rowCorrect+colCorrect] = _Counter;
        }

        //Переключаем b1
        b1 = !b1;
    } else {

        //Просчет начального значения
        startPos=iteration + 1;

        //Просчет конечного значения
        if(d2) endPos=_Digit-1 - iteration;
        else    endPos=_Digit-1 - (iteration + 1);

//        if(d4 && iteration==0 ) {
//            startPos++;
//            endPos++;
//        }

        //Вычисление смещения колонки (единицы)
        if (d2) colCorrect = (_Digit - (iteration + 1) );
        else colCorrect = (iteration);

        cout<<"Позиции"<<startPos<<"-"<<endPos<<"\n";
        for (i = startPos; i <= endPos; i++){

               // Вычисление смещения строки (порядки)
               if (d2) rowCorrect = i * _Digit;             //Прямое
               else rowCorrect = (endPos - i+1) * _Digit;    //Обратное

               if (d4 && iteration>0) rowCorrect+=_Digit;

               // Считаем и заполняем
               _Counter++;
               cout<<_Counter<<"\t"<<rowCorrect+colCorrect<<"\n";
               _Array[rowCorrect+colCorrect] = _Counter;
            }

        // Переключаем b2
        b2 = !b2;
    }


    //Рекурсия пока не досчитаемся до счетчика
    if (_Counter<_Max){
        this->fillLine(iteration,b1,b2);
    }
}



void MatrixCycle::__toString(){
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
