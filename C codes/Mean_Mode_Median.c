// C program to find mean, median and mode

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;                                            // Declaration of variable n
    printf("Enter the number of elements\n");
    scanf("%d", &n); 
    int arr[n];                                       // Declaring variable of size n
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);                         // Storing elements of array using for loop
    }
    // Calculation of mean of the elements
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The mean of the elements are %.3f\n", sum / n);

    // Calculation of median of the elements
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    if (n % 2 == 0)
    {
        int a = arr[n / 2];
        int b = arr[n / 2 - 1];
        printf("The median of the elements is %.2f\n", (a + b) / 2.0);
    }
    else
    {
        printf("The median of the elements is %d\n", arr[(n + 1) / 2 - 1]);
    }

    // Calculation of mode of the elements
    int e[100] = {0}, mode, max = 0, k = 0, f = 1;
    for (int x = 0; x < n - 1; x++)
    {
        mode = 0;
        for (int y = x + 1; y < n; y++)
        {
            if (arr[x] == arr[y])
            {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0))
        {
            k = 0;
            max = mode;
            e[k] = arr[x];
            k++;
        }
        else if (mode == max)
        {
            e[k] = arr[x];
            k++;
        }
    }
    for (int z = 0; z < n; z++)
    {
        if (arr[z] == e[z])
            f++;
    }
    if (f == n)
    {
        printf("The mode of this data does not exist as every number has one frequency");
    }
    else
    {
        printf("The mode of the data : ");
        for (int x = 0; x < k; x++)
        {
            printf(" %d ", e[x]);
        }
    }
    return 0;
}
