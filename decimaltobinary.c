//Program to convert given decimal number to binary number
#include <stdio.h>
int main()
{
    int a, b, c[100];
    printf("Enter the number to convert into binary:\n");
    scanf("%d", &a);
    for (b = 0; a > 0; b++)
    {
        c[b] = a % 2;
        a = a / 2;
    }

    printf("The binary number is:\n");
    for (b = b - 1; b >= 0; b--)
    {
        printf("%d", c[b]);
    }
    return 0;
}