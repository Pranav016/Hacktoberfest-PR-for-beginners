#include <string.h>

const char *thousands[4] = {"", "M", "MM", "MMM"};
const char *hundreds[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
const char *tens[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
const char *ones[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

char *intToRoman(int num){
    char *roman = malloc(16);
    int index1000, index100, index10, index1;
    index1000 = num / 1000;
    index100 = (num % 1000) / 100;
    index10 = (num % 100) / 10;
    index1 = (num % 10);
    strcpy(roman, thousands[index1000]);
    strcat(roman, hundreds[index100]);
    strcat(roman, tens[index10]);
    strcat(roman, ones[index1]);
    return roman;
}

int main()
{
    printf("%s\n",intToRoman(1994));    
    return 0;
}