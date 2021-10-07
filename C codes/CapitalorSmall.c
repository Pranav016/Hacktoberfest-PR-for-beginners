#include<stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	//int z;
	printf("Enter a character : ");
	scanf("%c",&ch);
	//z = (int)ch;
	if(ch >= 65 && ch <= 90)// range will start from 65 not 67
	{
		printf("\n %c is a Capital Letter",ch);
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("\n %c is a Small Letter",ch);
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("\n %c is a Digit",ch);
	}
	else 
	{
		printf("\n %c is a special character",ch);
	}
	return 0;
}
