#include "headers.h"


// 112 �������� ������ ����������
// ������� ������� ���� ������������� ��������
// �������� � �������� ���������� ������ �����, �������� ������ ���������
// �������� ������������ ���������, �������� ������� ���������, �������� ������� ����� �������
// ���� ������� ������ �� ���������

void merge_mass(int C[], int l, int m, int r, int k)             // ������� ������� ���� ��������
{
    int i;                                                          // ������ i ��� ������� �������
    int j;                                                          // ������ j ��� ������� �������
    int u1 = 0;
    int u2 = 0;
    int array1 = m - l + 1;                                         // ��������� ����� ������ �������� �������
    int array2 = r - m;                                             // ��������� ����� ������ �������� �������

    int A[array1];                                               // ��������� ������ �� ������ �������� �����
    int B[array2];                                               // ��������� ������ �� ������ �������� �����

    for (i = 0; i < array1; i++)                                    // ���� ��� ������ ����� � ������ ������
    {
        A[i] = C[l + i];                                            // ��������� ����� � ������� ������ ���������, ������ ������ ����� C ������
    }



    for (i = 0; i < array2; i++)                                    // ���� ��� ������ ����� �� ������ ������
    {
        B[i] = C[m + 1 + i];                                        // ��������� ����� � ������� ������������ ���������, ������ ������ ����� C ������
    }


    i = j = 0;                                                      // �������� ������� i � j, ����� ������������ �� � ����� �������

    for(int s = l; s <= r; s++)                                     // ���� ������� ���� �������� �������� � ������ ���������
    {
        if (i >= array1)                                            // ���� � ������ ������� ����������� �����, �� ��������� ��� ����� �� �������
        {
            C[s] = B[j];
            j++;
        }
        else if (j >= array2)                                       // ���� �� ������ ������� ����������� �����, �� ��������� ��� ����� �� �������
        {
            C[s] = A[i];
            i++;
        }
        else if (to_binary(A[i], &u1) <= to_binary(B[j], &u2))                                      // ����� ����� �� ������� ������� � ���������� �� ������
        {
            C[s] = A[i];
            i++;
        }
        else                                                        // ������ �� ���������, ���������� ������� ����� � �������� ������
        {
            C[s] = B[j];
            j++;
        }
        u1 = u2 = 0;
    }
}
