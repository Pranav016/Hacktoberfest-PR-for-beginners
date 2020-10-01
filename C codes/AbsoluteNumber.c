#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num>=0)
	{
		printf("The absolute number is %d",num);
	}
	else 
	{
		num = num *(-1);
		printf("The absolute number is %d",num);
	}

	return 0;
}