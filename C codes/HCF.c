// This C programme is used to calculate HCF of any number of terms

#include <stdio.h>

int hcf(int arr[], int n)
{
    int min = arr[0], hcf;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i]; // Here, we have find the minimum element of the array
    }
    for (int i = 1; i <= min; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                count++; // Counting number of elements divisible by i
            }
        }
        if (count == n)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int n;
    printf("Enter the number of terms :  ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int HCF = hcf(arr, n);
    printf("The HCF is %d\n", HCF);
    return 0;
}
