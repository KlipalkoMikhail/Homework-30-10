#include "minimax.h"

int minimax(double number[], int count, double *max, double *min)
{

    for (int i = 0; i < count; i++) // проверка на мин/макс
    {
        if (*max <= number[i]) // сравнение максимума с числом из массива
        {
            *max = number[i];
        }
        if (*min >= number[i]) // сравнение минимума с числом из массива
        {
            *min = number[i];
        }
    }

    return 0;
}
