#include "headers.h"
#include <stdio.h>
#include <stdlib.h>
#define N 8000

// 112 �������� ������ ����������
// ������� ��������� ��������� �����
// �������� � �������� ���������� ������ � �������� ����� �������

void mass_generation(int number[], int k)                              // ������� ��������� ��������� �����
{
    FILE * fsource;                                                    // ���� ��� ���������� ��������� �������
    FILE * fin;                                                        // ���� ��� ������������������ �������
    fin = fopen("in.txt", "a");                                        // �������� ����� � ����������������� �������� �� ���������� �����
    fsource = fopen("source.txt", "w");                                // �������� ����� � �������� �������� �� ������

    printf("Generating %d numbers...\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // ���� ��������� ��������� ����� � �� ������ � �������� ����
    {
        int A = rand()%100;                                            // ����� ������������� �����
        int B = -1*rand()%100;                                         // ����� ������������� �����
        number[i]= A + B;
        fprintf(fsource,"%d ", number[i]);                             // ������ ����� � �������� ����
    }
    printf("Sorting this %d numbers...\n", k*N);
    printf("\n");

    fprintf(fin, "Starting sequence with %d numbers:\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // ���� ������ ����� � ���� � ������������������ ���������
    {
        fprintf(fin, "%d ", number[i]);
    }

    fclose(fin);                                                       // �������� ����� � ����������������� ��������
    fclose(fsource);                                                   // �������� ����� � �������� ��������

}
