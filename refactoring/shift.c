#include "shift.h"
int shift(double number[], int count)
{
    double savenumber; // переменная под первое число последовательности

    savenumber = number[count - 1]; // сохраняем последнее значенив массиве
    while ( count > 1) // цикл сдвига
    {
        number[count - 1] = number[count - 2]; // сдвигаем массив вправо
        count -= 1;
    }
        number[0] = savenumber; // присваиваем значение последнего члена в массиве первому члену

    return count;
}

