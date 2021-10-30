// ����������� ��������� ��������� ������������������

#include <stdio.h>
#define EPSILON 0.000001

// 112 �������� ������ ����������

int dataprocessing(FILE* file);
int main(void)
{
	char filename[120]; // ������ ��� �����
	int result; // ������ ��� ���������

	printf("Test on equal sequence\n");
	printf("Enter file name: "); // ���� ����� ����� � ����������
	scanf("%s", filename); // ������ ����� �����

	FILE* file = fopen(filename, "r"); // �������� ����� ��� ������

	if (!file) // ���� ���� �� ����������
	{
		printf("Unable to open %s\n", filename);

		return 1;
	}
	else
	{
		printf("File has just been opened.\n");
	}

	result = dataprocessing(file); // ��������� ������������������

	printf("Scanning...\n");
	printf("Result %d\n", result);

	return 0;

}

// 112 �������� ������ ����������

int dataprocessing(FILE* file)
{
	double number; // ������ ��� �������������� ����� �� �����
	double startnumber = 0; // ����� ��� ��������� � �������
	int result = 0; // ������ ���������
	int sign; // ���������� ��� ������ �����

	fscanf(file, "%lf", &number); // ��������� ������ ����� ������������������
	startnumber = number; // ����������� �������� ������� ����� �����, � ������� ����� ���������� ������ ����� ������������������

	while (fscanf(file, "%lf", &number) == 1) // ���������� ����� ����� ������� �� ����� �����
	{
		sign = (number - startnumber) ? 1: -1; // ������ ����� ����� ���������� sign
		if (sign*(number - startnumber) > EPSILON) // ���� ����������� ����� �� ������ ������ ����������
		{
			result = -1; // �� ��� ����� ������������������ ����� ����� �����

			return -1;
		}
		result = 1;
	}

	return 1;
}
