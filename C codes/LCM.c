// This C programme is used to find LCM of any number of terms

#include <stdio.h>

int lcm(int arr[], int n)
{
    int i = 0, fact = 1;
    while (fact)
    {
        int count = 0;
        i++;
        for (int j = 0; j < n; j++)
        {
            if (i % arr[j] == 0)
            {
                count++;
            }
        }
        if (count == n)
            fact = 0;
    }
    return i;
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
    int LCM = lcm(arr, n);
    printf("The LCM is %d\n", LCM);
    return 0;
}
