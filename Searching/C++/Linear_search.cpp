#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int i, n, x;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter element to be searched: ";
    cin >> x;
    int result = search(a, n, x);
    if (result == -1)
        cout << x << " is not found.";
    else
        cout << x << " is found at position " << result + 1 << " in the array";

    return 0;
}