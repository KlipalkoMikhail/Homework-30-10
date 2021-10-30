#include "headers.h"
#include <stdio.h>
#define N 4000

// 112 �������� ������ ����������
// ������� �������� ���������� �� ���������������
// �������� � �������� ���������� ������ ����� � �������� ������� ����� �������

int test_sort(double number[], int k)                   // ������� �������� ���������������� ������� �� ���������������
{
    FILE * fout;                                        // ���� � ��������������� ��������
    fout = fopen("out.txt", "a");                       // �������� ����� � ���������������� ��������� �� ���������� �����

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // ���� �������� ������� �� ���������������
    {
        if (number[i] > number[i+1])                    // ������� ������� ����������� �����
        {
            printf("INCORRECT SORTING.\n");             // �������� ��������������
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                       // ���� ������ ����� � fout
    {
        fprintf(fout, "%lf ", number[s]);
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // �������� �����

    return 0;
}
