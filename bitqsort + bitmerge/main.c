// Быстрые сортировки: quicksort и mergesort СОРТИРУЮТ ПО КОЛИЧЕСТВУ БИТ
// Задача: отсортировать массив в порядке возрастания КОЛИЧЕСТВА БИТОВ, числа из массива лежат в промежутке [-100,100]

#include <time.h>                                                       // библиотека с clock()
#include <stdlib.h>                                                     // библиотека с qsort()
#include "headers.h"                                                    // библиотека с функциями

#define N 4                                                             // объявление начального количества чисел

// 112 Клипалко Михаил Михайлович

int main(void)
{
    FILE * ftime;                                                       // файл с замером времени
    FILE * fout;                                                        // файл с отсортированным массивом
    FILE * fqout;                                                       // файл с отсортированным массивом

    clock_t t;                                                          // переменная для времени

    ftime = fopen("time.txt", "w");                                     // открытие файла на запись
    fout = fopen("out.txt", "w");                                       // открытие файла вывода для mergesort на запись
    fqout = fopen("qout.txt", "w");                                     // открытие файла вывода для qsort на запись

    srand(time(NULL));                                                  // чтобы избегать псевдорандомные числа

    for(int k = 1; k <= 32; k *= 2)                                     // цикл генерации и сортировки чисел
    {
        int number[k*N];                                                // создание массива из k*N чисел

        mass_generation(number, k);                                     // заполнение массива случайными числами, запись изначального массива в файл

        fprintf(ftime, "Merge sorting time of %d numbers: ", k*N);
        printf("Merge sorting time of %d numbers: ", k*N);

        t = clock();                                                    // начала отсчета
        bit_merge_sort(number, k);                                      // сортировка слиянием
        t = clock() - t;                                                // конец отсчета

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // вывод времени в файл
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        bit_test_sort(number, k, fout);                                 // проверка сортировки на корректность

        mass_read(number, k);                                           // считывание чисел из массива

        fprintf(ftime, "Quick sorting time of %d numbers: ", k*N);
        printf("Quick sorting time of %d numbers: ", k*N);

        t = clock();                                                    // начала отсчета
        qsort(number, k*N, sizeof(int), bit_compare);                   // библиотечная сортировка
        t = clock() - t;                                                // конец отсчета

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // вывод времени в файл
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        bit_test_sort(number, k, fqout);                                // проверка сортировки на корректность
        printf("\n");
    }

    fclose(fqout);                                                      // закрытие файла
    fclose(fout);                                                       // закрытие файла
    fclose(ftime);                                                      // закрытие файла

    return 0;
}
