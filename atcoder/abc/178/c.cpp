#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll mypow(ll n, ll r)
{
	ll a = 1;

	for (ll i = 0; i < r; i++) {
		a *= n;
		a %= MOD;
	}

	return a;
}

int main()
{
	ll N;

	cin >> N;

	ll ans = mypow(10, N) - mypow(9, N) * 2 + mypow(8, N);

	ans %= MOD;
	ans = (ans + MOD) % MOD;
	cout << ans << endl;

	return 0;
}
