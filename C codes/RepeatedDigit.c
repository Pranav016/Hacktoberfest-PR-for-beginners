#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void Swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse(struct Array *arr)
{
    int i,j;
    int *B=(int *)malloc(arr->length*sizeof(int));

    for(i=arr->length-1,j=0; i>=0; i--,j++)
      B[j]=arr->A[i];

    for(i=0; i<arr->length; i++)
      arr->A[i]=B[i];
    free(B); // To avoid memory leak
}

void RReverse(struct Array *arr)
{
  for(int i=0, j=arr->length; i<j; i++, j--)
  Swap(&arr->A[i],&arr->A[j]);
}

int main()
{
    struct Array arr={{2,3,4,5,6,7},10,6};
    Display(arr);

    printf("\n\n");
    
    Reverse(&arr);
    Display(arr);

    printf("\n\n");

    RReverse(&arr);
    Display(arr);
    return 0;
}
