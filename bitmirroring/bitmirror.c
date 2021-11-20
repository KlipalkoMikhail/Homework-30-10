#include <stdio.h>
#include "headers.h"

// 112 Клипалко Михаил Михайлович

int main(void)
{
    int number;
    char bit_str[8*sizeof(int) + 1];
    printf("Enter number\n");

    while(scanf("%d", &number) == 1)
    {
        to_binary(number, bit_str);
        printf("Starting number is %d\n", number);
        show_bstr(bit_str);
        printf("\n");

        bit_reverse(bit_str);
        number = bit_mirror(bit_str);

        printf("\n");
        printf("Mirrored number is %d\n", number);
        show_bstr(bit_str);
    }

    return 0;
}
