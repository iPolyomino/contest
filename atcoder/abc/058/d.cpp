#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
	ll n, m;

	cin >> n >> m;

	vector < ll > x(n), y(m);

	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> y[i];
	}

	ll a = 0, b = 0;

	for (ll i = 0; i < n; i++) {
		a = (a + (2 * (i + 1) - 1 - n) * x[i] % MOD) % MOD;
	}

	for (ll i = 0; i < m; i++) {
		b = (b + (2 * (i + 1) - 1 - m) * y[i] % MOD) % MOD;
	}

	ll ans = a * b % MOD;

	cout << ans << endl;

	return 0;
}
