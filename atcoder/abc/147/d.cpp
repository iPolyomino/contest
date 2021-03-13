#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;

int main()
{
	int N;

	cin >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	ll ans = 0;
	for (int d = 0; d < 60; d++) {
		ll n0 = 0, n1 = 0;
		for (int i = 0; i < N; i++) {
			if ((A[i] >> d) & 1) {
				n1++;
			} else {
				n0++;
			}
		}
		ll tmp = (1LL << d) % MOD;
		ll n = n0 * n1 % MOD;

		tmp = tmp * n % MOD;
		ans = (ans + tmp) % MOD;
	}

	cout << ans << endl;
	return 0;
}
