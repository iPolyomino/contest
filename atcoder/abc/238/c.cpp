#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 998244353
#define inv2 499122177

ll triangular_number(ll x)
{
	x %= MOD;
	ll res = x;

	res *= (x + 1);
	res %= MOD;
	res *= inv2;
	res %= MOD;
	return res;
}

int main()
{
	ll N;

	cin >> N;

	ll res = 0;
	ll p10 = 10;

	for (int dg = 1; dg <= 18; dg++) {
		ll l = p10 / 10;
		ll r = min(N, p10 - 1);
		if (l <= r) {
			res += triangular_number(r - l + 1);
			res %= MOD;
		}
		p10 *= 10;
	}

	cout << res << endl;

	return 0;
}
