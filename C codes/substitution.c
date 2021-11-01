#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    int i = 0;
    int j = 0;
    int h = 0;
    int x = 0;
    int asciikey[52];
    int plaintxtascii[26];
    int upperchk;
    char sub[26];
//check amount of arg
    if (argc < 2||argc>2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
//check that the arg is 26 char long
    while(argv[1][i] !='\0')
    {
        i++;
    }
    if(i<26||i>26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
//turn into two ascii maps one uppercase one lowercase while checking for any non apha
    while (argv[1][j] != '\0')
    {
        asciikey[j]=argv[1][j];
       upperchk = isupper(asciikey[j]);

        if (upperchk == 0){
            asciikey[j]  = argv[1][j] - 32;
        }
        else
        {
            asciikey[j]  = argv[1][j];
        }
        if(asciikey[j] < 65 || asciikey[j] > 90)
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
//nested for loop to cheak for doubles
        for (x = 0 ; x < j ; x++)
        {
            if(asciikey[j] == asciikey[x])
            {
                return 1;
            }
        }
        asciikey[ j + 26]=asciikey[j] + 32;
        j++;
    }
    string plaintxt = get_string("plaintext: ");

//taking user imput looping with if's to cheak with upper then lower case and rebuilding in to a cipher string one char at a time
    while(plaintxt[h] != '\0')
    {
        plaintxtascii[h]= plaintxt[h];

        if (plaintxtascii[h] >= 65 && plaintxtascii[h] <= 90)
        {
            plaintxtascii[h] = plaintxtascii[h] - 65;
            sub[h] = asciikey[plaintxtascii[h]];

        }
        else if (plaintxtascii[h] >= 97 && plaintxtascii[h] <= 122)
        {
            plaintxtascii[h]= (plaintxtascii[h] - 97) + 26;
            sub[h] = asciikey[plaintxtascii[h]];

        }
        else if (plaintxtascii[h] == 32)
        {
           sub[h] = ' ';
        }
        else
        {
            sub[h] = plaintxtascii[h];
        }
        h++;
    }
    sub[h]= '\0';
    printf("ciphertext: ");
    printf("%s",sub);
    printf("\n");
    return 0;
}
