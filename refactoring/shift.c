#include "shift.h"
int shift(double number[], int count)
{
    double savenumber; // ���������� ��� ������ ����� ������������������

    savenumber = number[count - 1]; // ��������� ��������� �������� �������
    while ( count > 1) // ���� ������
    {
        number[count - 1] = number[count - 2]; // �������� ������ ������
        count -= 1;
    }
        number[0] = savenumber; // ����������� �������� ���������� ����� � ������� ������� �����

    return count;
}

