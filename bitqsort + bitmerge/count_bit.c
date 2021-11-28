#include "headers.h"

// 112 �������� ������ ����������

// ������� �������� ���������� ��� � �����
// � �������� ���������� ������������ �������� �����, ������� ���������� ���������� ��� � �����

int count_bit(int n)                    // ������� �������� ���������� ��� � �����
{
    int count = 0;                      // ������� �����
    int mask = 1;                       // ����� � ������ �����

    if (n < 0)                          // ���� ����� ������ ����
    {
        count++;                        // �������� ���������� ��� �� 1
        n = -n;                         // ������ ���� �����
    }

    for (int i = 1;i < 32;i++)          // ���� �������� ��� � �����
    {
		if ((n & mask)!= 0) count++;    // ���������� ��������� ��� � ������
		mask <<= 1;                     // ������� ���� � ����� ������ �� 1
	}

    return count;                       // ���������� ���������� ��� � �����
}
