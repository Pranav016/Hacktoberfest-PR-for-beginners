/* 
 * C Program to Implement Cyclesort 
 */
#include <stdio.h>
 
#define MAX 8
 
void cycle_sort(int *);
 
void main()
{
    int a[MAX],i;
 
    printf("enter the elements into array :");
    for (i = 0;i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    cycle_sort(a);
    printf("sorted elements are :\n");
    for (i = 0;i < MAX; i++)
    {
        printf("%d", a[i]);
    }
}
 
/* sorts elements using cycle sort algorithm */
void cycle_sort(int * a)
{
    int temp, item, pos, i, j, k;
 
    for (i = 0;i < MAX; i++)
    {
        item = a[i];
        pos = i;
        do
        {
            k = 0;
            for (j = 0;j < MAX;j++)
            {
                if (pos != j && a[j] < item)
                {
                    k++;
                }
            }
            if (pos != k)
            {
                while (pos != k && item == a[k])
                {
                    k++;
                }
                temp = a[k];
                a[k] = item;
                item = temp;
                pos = k;
            }
        }while (pos != i);
    }
}
#It is optimal in terms of number of memory writes. It minimizes the number of memory writes to sort (Each value is either written zero times, if it’s already in its correct position, or written one time to its correct position.)
#It is based on the idea that array to be sorted can be divided into cycles. Cycles can be visualized as a graph.
