#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[], int n)
{
    int i, j, tmp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {-5, 6, 87, 99, 50, -54, 0, 123, 4};
    bubbleSort(arr, 9);

    for(int i = 0;i < 9;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}