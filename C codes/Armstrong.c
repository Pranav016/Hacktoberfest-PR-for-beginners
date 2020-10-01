#include<stdio.h>
int main(void)
{
	int n,s,k,rem;
	printf("Enter a Number : \n");
	scanf("%d",&n);
	k = n;
	while(n!=0)
	{
		rem = n%10;
		s = s + (rem*rem*rem);
		n/=10;
	}
	if(s==k)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
	 
}