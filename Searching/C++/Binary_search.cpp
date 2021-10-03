#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
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
    int result = binarySearch(a, 0, n - 1, x);
    if (result == -1)
        cout << x << " is not found.";
    else
        cout << x << " is found at position " << result + 1 << " in the array";

    return 0;
}
