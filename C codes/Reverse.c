#include<stdio.h>
int main(void)
{
	int n,n1,q,r = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	//n1 = n%10;
	r = ((r*10)+n1);
	n/=10;
	printf("\nReverse of the number :%d",r);
}
/*#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}*/
