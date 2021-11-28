// ������� ����������: quicksort � mergesort ��������� �� ���������� ���
// ������: ������������� ������ � ������� ����������� ���������� �����, ����� �� ������� ����� � ���������� [-100,100]

#include <time.h>                                                       // ���������� � clock()
#include <stdlib.h>                                                     // ���������� � qsort()
#include "headers.h"                                                    // ���������� � ���������

#define N 4                                                             // ���������� ���������� ���������� �����

// 112 �������� ������ ����������

int main(void)
{
    FILE * ftime;                                                       // ���� � ������� �������
    FILE * fout;                                                        // ���� � ��������������� ��������
    FILE * fqout;                                                       // ���� � ��������������� ��������

    clock_t t;                                                          // ���������� ��� �������

    ftime = fopen("time.txt", "w");                                     // �������� ����� �� ������
    fout = fopen("out.txt", "w");                                       // �������� ����� ������ ��� mergesort �� ������
    fqout = fopen("qout.txt", "w");                                     // �������� ����� ������ ��� qsort �� ������

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

        bit_test_sort(number, k, fout);                                 // �������� ���������� �� ������������

        mass_read(number, k);                                           // ���������� ����� �� �������

        fprintf(ftime, "Quick sorting time of %d numbers: ", k*N);
        printf("Quick sorting time of %d numbers: ", k*N);

        t = clock();                                                    // ������ �������
        qsort(number, k*N, sizeof(int), bit_compare);                   // ������������ ����������
        t = clock() - t;                                                // ����� �������

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // ����� ������� � ����
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        bit_test_sort(number, k, fqout);                                // �������� ���������� �� ������������
        printf("\n");
    }

    fclose(fqout);                                                      // �������� �����
    fclose(fout);                                                       // �������� �����
    fclose(ftime);                                                      // �������� �����

    return 0;
}
