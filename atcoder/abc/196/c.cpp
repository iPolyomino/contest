#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll digit(ll n)
{
	ll d = 0;

	while (n > 0) {
		n /= 10;
		d++;
	}

	return d;
}

int main()
{
	ll N;

	cin >> N;

	ll ans = 0;

	for (ll i = 1; i < N; i++) {
		ll cand = i * pow(10LL, digit(i)) + i;
		if (cand > N) {
			break;
		}
		ans++;
	}

	cout << ans << endl;

	return 0;
}
