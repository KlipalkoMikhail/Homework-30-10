// ����������� ��������� ��������� ������������������ (� ��������)

#include <stdio.h>
#define EPSILON 0.000001
#define N 200

// 112 �������� ������ ����������

int dataprocessing(int count, double number[]);
int fabs_handmade(double x);

int main(void)
{
    double number[N];
    int count = 0;
	char filename[120];                                 // ������ ��� �����
	int result;                                         // ������ ��� ���������

	printf("Test on equal sequence\n");
	printf("Enter file name: ");                        // ���� ����� ����� � ����������
	scanf("%s", filename);                              // ������ ����� �����

	FILE* file = fopen(filename, "r");                  // �������� ����� ��� ������

	if (!file)                                          // ���� ���� �� ����������
	{
		printf("Unable to open %s\n", filename);

		return 1;
	}
	else
	{
		printf("File has just been opened.\n");
	}

	while (fscanf(file, "%lf", &number[count]) == 1)                            // ���������� ����� ����� ������� �� ����� �����
	{
		if (count > N)
		{
			printf("File has too many numbers, last number of the sequence is %lf\n", number[count]); // ������� ����� ����� � �����
			break;
		}
		count++;
	}

	if (count == 0)
    {
        printf("ERROR: File is empty\n");                               // ������ �� ������� �����
        return -1;
    }
    if (feof(file) == 0)                                                // ������ �� ������������ �������� � ������������������
    {
        printf("ERROR: File has invalid numbers\n");
        return -1;
    }

	result = dataprocessing(count, number);

	printf("Scanning...\n");
	printf("Result %d\n", result);

	return 0;
}

// 112 �������� ������ ����������

int dataprocessing (int count, double number[])            // ������� ����������� ��������� ���� �����
{
    int result = 0;                                                     // ���������

    for (int i = 1; i < count; ++i)
    {
		if (fabs_handmade(number[i] - number[0]) > EPSILON)             // ���� ����������� ����� �� ������ ������ ����������
		{
			result = -1;                                                // �� ��� ����� ������������������ ����� ����� �����

			return -1;
		}
		result = 1;
	}
    return result;
}

int fabs_handmade(double x)                                             // ������ ������ �����
{
   x = (x > 0)? x: -x;
   return x;
}


