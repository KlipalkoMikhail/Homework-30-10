#include "headers.h"
#include <stdio.h>

// 112 �������� ������ ����������

void show_bstr(char * str)                  // ����� ��� �� 4, �������� - ������ �� 0 � 1
{
    int i = 0;
    printf("Bit representation is ");
    while (str[i])
    {
        putchar(str[i]);                    // ����� ����������� ���� ����� putchar
        if(++i%4 == 0 && str[i])            // ������ ������ ����� 4
            putchar(' ');
    }
}
