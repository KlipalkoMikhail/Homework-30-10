// ��������� ���������� �������� + ������� ����������: quicksort � mergesort ��������� �� ���������� �����
// ������: ������������� ������ � ������� ����������� ���������� �����, ����� �� ������� ����� � ���������� [-100,100]

#include <stdio.h>                                                      // ���������� ����� � ������
#include <time.h>                                                       // ���������� � clock()
#include <stdlib.h>                                                     // ���������� � qsort()
#include "headers.h"                                                    // ���������� � ���������

#define N 8000                                                          // ���������� ���������� ���������� �����

// 112 �������� ������ ����������

int main(void)
{
    FILE * ftime;                                                       // ���� � ������� �������
    ftime = fopen("time.txt", "w");                                     // �������� ����� �� ������
    clock_t t;                                                          // ���������� ��� �������
    srand(time(NULL));                                                  // ����� �������� ��������������� �����
    for(int k = 1; k <= 32; k *= 2)                                     // ���� ��������� � ���������� �����
    {
        int number[k*N];                                                // �������� ������� �� k*N �����

        mass_generation(number, k);                                     // ���������� ������� ���������� �������, ������ ������������ ������� � ����

        fprintf(ftime, "Merge sorting time of %d numbers: ", k*N);
        printf("Merge sorting time of %d numbers: ", k*N);

        t = clock();                                                    // ������ �������
        bit_merge_sort(number, k);                                      // ���������� ��������
        t = clock() - t;                                                // ����� �������

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // ����� ������� � ����
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        bit_test_sort(number, k);                                       // �������� ���������� �� ������������

        mass_read(number, k);                                           // ���������� ����� �� �������

        fprintf(ftime, "Quick sorting time of %d numbers: ", k*N);
        printf("Quick sorting time of %d numbers: ", k*N);

        t = clock();                                                    // ������ �������
        qsort(number, k*N, sizeof(int), bit_compare);                   // ������������ ����������
        t = clock() - t;                                                // ����� �������

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // ����� ������� � ����
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        bit_test_sort(number, k);                                       // �������� ���������� �� ������������
        printf("\n");
    }

    return 0;
}
