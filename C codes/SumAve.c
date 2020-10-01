#include<stdio.h>
void main()
{
	int a,b,s;
	double av;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	s = a+b;
	printf("\nThe Summation is : %d",s);
	av = s/2.0;
	printf("\nThe Average is : %f",av);
	
}
