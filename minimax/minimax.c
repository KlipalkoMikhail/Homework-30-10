// ����������� ����� ������� ������

#include <stdio.h>
#include "minimax.h"
#define N 2000

// 112 �������� ������ ����������

int main(void)
{
    double max = 0;
    double min = 0;
    char filename[120];
    double number[N]; // ������ �� N �����
    int count = 0; // ������� �����

    printf("Shifter of the sequence\n");
    printf("Enter the file name: ");
    scanf("%s", filename);

    FILE * file = fopen(filename, "r");
    if(!file)
    {
        printf("File is not existing\n");
        return -1;
    }
    else
    {
        printf("File has been opened\n");
    }

    printf("Sequence:\n");
    while (fscanf(file, "%lf", &number[count]) == 1) // ���������� ����� � ������
    {
        printf("%lf ", number[count]); // ������� ������������������ �� �����
        count++;
        if ( count > N )
        {
            printf("File has too many numbers, last number of the sequence is %lf\n", number[count - 1]); // ������� ����� ����� � �����
            break;
        }
    }
    if (count == 0)
    {
        printf("ERROR: File is empty\n"); // ������ �� ������� �����
        return -1;
    }
    if (feof(file) == 0) // ������ �� ������������ �������� � ������������������
    {
        printf(" ERROR: File has invalid numbers\n");
        return -1;
    }

    printf("\n");
    printf("\n");

    minimax(number, count, &max, &min);

    printf("MAX: %g\n", max);
    printf("MIN: %g\n", min);

    return 0;
}



