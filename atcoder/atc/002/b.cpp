#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M, P;

	cin >> N >> M >> P;

	ll n = N;
	ll ans = 1;
	for (ll k = P; k > 0; k >>= 1) {
		if (k & 1) {
			ans = (ans * n) % M;
		}
		n = (n * n) % M;
	}

	cout << ans << endl;

	return 0;
}
