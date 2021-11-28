#include "headers.h"

// 112 �������� ������ ����������

// ������� ������� ���� ������������� ��������
// �������� � �������� ���������� ������ �����, �������� ������ ���������
// �������� ������������ ���������, �������� ������� ���������, �������� ������� ����� �������
// ���� ������� ������ �� ���������

void bit_merge_mass(int C[], int l, int m, int r, int k)            // ������� ������� ���� ��������
{
    int i;                                                          // ������ i ��� ������� �������
    int j;                                                          // ������ j ��� ������� �������
    int array1 = m - l + 1;                                         // ��������� ����� ������ �������� �������
    int array2 = r - m;                                             // ��������� ����� ������ �������� �������

    int A[array1];                                                  // ��������� ������ �� ������ �������� �����
    int B[array2];                                                  // ��������� ������ �� ������ �������� �����

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
        else if (count_bit(A[i]) <= count_bit(B[j]))                // ����� ����� �� ������� ������� � ���������� �� ������
        {
            C[s] = A[i];
            i++;
        }
        else                                                        // ������ �� ���������, ���������� ������� ����� � �������� ������
        {
            C[s] = B[j];
            j++;
        }
    }
}
