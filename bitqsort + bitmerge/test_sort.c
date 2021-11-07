#include "headers.h"
#include <stdio.h>
#define N 8000

// 112 �������� ������ ����������
// ������� �������� ���������� �� ���������������
// �������� � �������� ���������� ������ ����� � �������� ������� ����� �������

int test_sort(int number[], int k)                   // ������� �������� ���������������� ������� �� ���������������
{
    FILE * fout;                                        // ���� � ��������������� ��������
    fout = fopen("out.txt", "a");                       // �������� ����� � ���������������� ��������� �� ���������� �����

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // ���� �������� ������� �� ���������������
    {
        int u1 = 0;
        int u2 = 0;
        if (to_binary(number[i], &u1) > to_binary(number[i+1], &u2))  // ������� ������� ����������� �����
        {
            printf("INCORRECT SORTING.\n");             // �������� ��������������
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                       // ���� ������ ����� � fout
    {
        fprintf(fout, "%d ", number[s]);
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // �������� �����

    return 0;
}
