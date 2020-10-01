#include<stdio.h>
#include<stdlib.h>//Library required for malloc.
int * fun(int n) //Function returns pointer pointing to the newly alocated array.
{
	int *A;
	A=(int *)malloc(n*sizeof(int)); //In C we use malloc for dynamic memory allocation.Which allocates memory in heap(Free Store).
	int i;
	for( i=0;i<n;i++)
	A[i]=i;
	return A; 
}
int main()
{
	int *p;
	p=fun(5);
	int i;
	for(i=0;i<5;i++)
	printf("%d",p[i]);
	free(p);// It is used for deleting the allocated memory.
	return 0;
}
