#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int arr[], int n)
{
    int i, j, tmp;
    for(i = 0; i < n - 1; i++) {
        int min = i;
        for(j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        swap((arr + min), (arr + i));
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