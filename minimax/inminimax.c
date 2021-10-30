#include "minimax.h"

int minimax(double number[], int count, double *max, double *min)
{

    for (int i = 0; i < count; i++) // �������� �� ���/����
    {
        if (*max <= number[i]) // ��������� ��������� � ������ �� �������
        {
            *max = number[i];
        }
        if (*min >= number[i]) // ��������� �������� � ������ �� �������
        {
            *min = number[i];
        }
    }

    return 0;
}
