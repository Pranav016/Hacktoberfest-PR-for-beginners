// Used to compute all primes upto n(n<=10^7).

#include <bits/stdc++.h>
using namespace std;

void soe(vector<bool> &v, int n)
{
    for (int i = 0; i < n + 1; ++i)
        v[i] = true;
    v[0] = false;
    v[1] = false;
    for (int i = 2; i * i <= n + 1; ++i)
    {
        if (v[i] == true)
        {
            for (int j = 2 * i; j < n + 1; j += i)
            {
                v[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1);
    soe(v, n);
    for (int i = 0; i < n + 1; ++i)
    {
        if (v[i] == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}
