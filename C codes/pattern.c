#include<stdio.h>
int main(void)
{
	int n,i,j;
	printf("\nEnter the limits : ");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//printf("\n");
}