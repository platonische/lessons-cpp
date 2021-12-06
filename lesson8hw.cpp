#include <iostream>

using namespace std;

struct Student {
    char *Name;
    int Rate;
    int Old;
};

void studentPrinter(Student *, int);
void walker(Student *, int);

void lesson8hw()
{
    int deep = 9;
    Student S1,S2,S3,S4,S5,S6,S7,S8,S9;
    S1.Name = "Вася"; S1.Rate = 5;
    S2.Name = "Катя"; S2.Rate = 4; S2.Old=12;
    S3.Name = "Митя"; S3.Rate = 2;
    S4.Name = "Лёня"; S4.Rate = 3;
    S5.Name = "Лиза"; S5.Rate = -1;
    S6.Name = "Лиза1"; S6.Rate = 1;
    S7.Name = "Лиза22"; S7.Rate = 0;
    S8.Name = "Лиза333"; S8.Rate = 50;
    S9.Name = "Ли"; S9.Rate = 8;

    walker(&S1, deep);
    studentPrinter(&S1, deep);
}


/**
 * Сортирует студентов по Rate без создания массивов
 *
 * @brief walker
 * @param List
 * @param deep
 */
void walker(Student *List, int deep)
{
    // Нужна именно дополнительная память в 1 Student
    Student Current;

    // Перебираем позиции
    for (int i=0; i < deep; i++) {

        // Скопировали данные текущего в буфер current
        Current = *(List+i);

        // Идем от текущей позиции в обратную сторону
        for (int j=i-1; j>=0; j--) {

            Student *Tested = (Student *)(List+j);

            //Если предыдущий больше/меньше - надо меняться местами
            if(Current.Rate > Tested->Rate) {

                //Сдвигаем вправо элемент
                *(List+j+1) = *(List+j);

                //Записываем себя на место сдвинутого
                *(List+j) = Current;

            } else {
                //Впереди уже никого точно нет. Прекращаем операцию / подрезаем ненужные прогоны
                break;
            }
        }
    }
}

/**
 * Выводим на экран наборы структур
 * @brief studentPrinter
 * @param List
 * @param deep
 */
void studentPrinter(Student *List, int deep)
{
    for (int i=0; i < deep; i++) {
        char *iName = (char *)((Student *)(List+i)->Name);
        int iRate = ((Student *)(List+i))->Rate;
        cout << iName << "\t";
        cout << iRate << endl;
    }
}
