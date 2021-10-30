// 112 �������� ������ ����������

#include <stdio.h>                           // ���������� ����� � ������
#include <time.h>                            // ���������� � clock()
#include <stdlib.h>                          // ���������� � qsort()

#define N 7500

void slow_sort(double*, int);                // ������� ���������� ��������
int test_sort(double*, int);                 // ������� �������� ���������������� ������� �� ���������������
void mass_generation(double*, int);          // ������� ��������� ��������� �����
void mass_read(double*, int);                // ������� ��� ���������� �������, ����� ����� ������������ ������ � quick ����������
int compare(const void *, const void *);     // ������� ��������� ���� �������� �� �������
