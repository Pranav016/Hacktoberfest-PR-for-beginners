// C++ program for implementation of Bubble sort

#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) //Bubble sort function
{
    for (int i = 0; i < n - 1; i++) //first loop
    {
        for (int j = 0; j < (n - i - 1); j++) //second loop
        {
            if (a[j] > a[j + 1]) /* ascending order condition */
            {
                swap(a[j], a[j + 1]); //C++ inbuild Swap function
            }
        }
    }
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int a[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, n); /* Calling the bubble_sort() by passing the array and size of the array */
    
    /* Printing the sorted array */
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
