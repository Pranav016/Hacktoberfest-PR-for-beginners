// This C program is used to generate random alphanumeric character

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int l = strlen(a);
    srand(time(NULL));
    printf("%c\n", a[rand() % l]);
    return 0;
}
