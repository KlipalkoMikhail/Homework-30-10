// ћедленна€ сортировка обменами + быстрые сортировки: quicksort и mergesort
// «адача: отсортировать массив в пор€дке возрастани€, числа из массива лежат в промежутке [-10,10]

#include <stdio.h>                                                      // библиотека ввода и вывода
#include <time.h>                                                       // библиотека с clock()
#include <stdlib.h>                                                     // библиотека с qsort()
#include "headers.h"                                                    // библиотека с функци€ми

#define N 4000                                                          // объ€вление начального количества чисел

// 112  липалко ћихаил ћихайлович

int main(void)
{
    FILE * ftime;                                                       // файл с замером времени
    ftime = fopen("time.txt", "w");                                     // открытие файла на запись
    clock_t t;                                                          // переменна€ дл€ времени
    srand(time(NULL));                                                  // чтобы избегать псевдорандомные числа
    for(int k = 1; k <= 32; k *= 2)                                     // цикл генерации и сортировки чисел
    {
        double number[k*N];                                             // создание массива из k*N чисел

        mass_generation(number, k);                                     // заполнение массива случайными числами, запись изначального массива в файл

        fprintf(ftime, "Merge sorting time of %d numbers: ", k*N);
        printf("Merge sorting time of %d numbers: ", k*N);

        t = clock();                                                    // начала отсчета
        merge_sort(number, k);                                          // сортировка сли€нием
        t = clock() - t;                                                // конец отсчета

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // вывод времени в файл
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        test_sort(number, k);                                           // проверка сортировки на корректность

        mass_read(number, k);                                           // считывание чисел из массива

        t = clock();                                                    // начала отсчета
        slow_sort(number, k);                                           // медленна€ сортировка обменами
        t = clock() - t;                                                // конец отсчета

        fprintf(ftime, "Slow sorting time of %d numbers: ", k*N);
        printf("Slow sorting time of %d numbers: ", k*N);

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // вывод времени в файл
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        test_sort(number, k);                                           // проверка сортировки на корректность

        mass_read(number, k);                                           // считывание чисел из массива

        fprintf(ftime, "Quick sorting time of %d numbers: ", k*N);
        printf("Quick sorting time of %d numbers: ", k*N);

        t = clock();                                                    // начала отсчета
        qsort(number, k*N, sizeof(double), compare);                    // библиотечна€ сортировка
        t = clock() - t;                                                // конец отсчета

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // вывод времени в файл
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        test_sort(number, k);                                           // проверка сортировки на корректность
        printf("\n");
    }

    return 0;
}
