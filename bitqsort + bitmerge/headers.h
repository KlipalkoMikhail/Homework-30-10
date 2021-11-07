// 112 �������� ������ ����������

#include <stdio.h>
#include <stdlib.h>

int merge_sort(double*, int);                   // ������� ���������� ��������
void slow_sort(double*, int);
void merge_mass(double*, int, int, int, int);   // ������� ������� ��������
int test_sort(double*, int);                    // ������� �������� ���������������� ������� �� ���������������
int min_index(int, int);                        // ������� ���������� �������� �� ����� �����
void mass_generation(double*, int);             // ������� ��������� ��������� �����
void mass_read(double*, int);                   // ������� ��� ���������� �������, ����� ����� ������������ ������ � quick ����������
int bit_compare(const void*, const void*);      // ������� ��������� ���� �������� �� �������
int bit_analyse(int* ,int* );                   // ������� ��������� ���� �������� �� �������
void to_binary(int, int*);

