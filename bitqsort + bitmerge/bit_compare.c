#include "headers.h"
// 112 �������� ������ ����������

int bit_compare(const void *a, const void *b)    // ������� ��������� ���� ����� �� �������
{
    const int *c, *d;
    int p1, p2;
    c = (const int*)a;
    d = (const int*)b;
    p1 = *c;
    p2 = *d;

    bit_analyse(&p1);
    bit_analyse(&p2);

    if (p1 < p2)
    {
        return -1;                               // ��������� ���� �������� ���� �����
    }
    else if (p1 > p2)
    {
        return 1;                                // ��������� ���� �������� ���� �����
    }
    else
    {
        return 0;                                // ��������� ���� �������� ���� �����
    }
}

