#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll count(ll n)
{
	if (n == 1) {
		return 1;
	}
	return count(floor(n / 2)) * 2 + 1;
}

int main()
{
	ll N;

	cin >> N;
	cout << count(N) << endl;
	return 0;
}
