#include<stdio.h>
int main(void)
{
	int n,sum = 0;
	printf("Enter the number  :");
	scanf("%d",&n);
	while(n!=0)
	{
		int r = n % 10;
		sum = sum + r;
		n /= 10;
		//printf("\nSummation of numbers : %d ",sum);
	}
	printf("\nSummation of numbers : %d ",sum);
}