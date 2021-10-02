//C++ implementation of Merge Sort
#include <bits/stdc++.h>
using namespace std;
//Merging two arrays a[s..mid] and a[mid+1...end]

void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    //Creating temp array
    int temp[100];

    //Merge the left and right array
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    //Copy remaining elements to temp array
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }
    //Copy all items to original array back
    for (int i = 0; i <= e; i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return; // Returns recursively
    }
    int mid = (s + e) / 2;

    mergeSort(a, s, mid);     //sorting first part of the array
    mergeSort(a, mid + 1, e); //sorting second part of the array

    merge(a, s, e); //merging both arrays
}
//Driver Code
int main()
{

    int a[5] = {2, 3, 1, 4, 2}; //Array
    mergeSort(a, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}