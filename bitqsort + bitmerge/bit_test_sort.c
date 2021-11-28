#include "headers.h"
#define N 4

// 112 �������� ������ ����������
// ������� �������� ���������� �� ���������������
// �������� � �������� ���������� ������ ����� � �������� ������� �������� �������

int bit_test_sort(int number[], int k, FILE * fout)         // ������� �������� ���������������� ������� �� ��������������� �� ���������� ���
{
    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                       // ���� �������� ������� �� ���������������
    {
        if (count_bit(number[i]) > count_bit(number[i+1]))  // ������� ������� ����������� �����
        {
            printf("INCORRECT SORTING.\n");                 // �������� ��������������
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                           // ���� ������ ����� � fout
    {
        to_binary(number[s], fout);                         // ���������� ����� ������� � ���� ����� | ������� ������������� | ���������� ���
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");                                    // ����� �������

    return 0;
}
