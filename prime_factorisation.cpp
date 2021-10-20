#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> p_fact(ll n)
{
	vector<ll> v;
	if (n % 2 == 0)
	{
		while (n % 2 == 0)
		{
			v.push_back(2);
			n /= 2;
		}
	}
	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				v.push_back(i);
				n /= i;
			}
		}
	}
	if (n != 1)
	{
		v.push_back(n);
	}
	return v;
}

int main()
{
	ll n;
	cin >> n;
	vector<ll> v;
	v = p_fact(n);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	return 0;
}
