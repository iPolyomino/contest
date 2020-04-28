#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll digits(ll n)
{
	int d = 1;
	while (n >= 10) {
		n /= 10;
		d++;
	}
	return d;
}

int main()
{
	ll N;
	cin >> N;

	ll ans = digits(N);

	for (ll i = 1; i * i <= N; i++) {
		if (N % i == 0) {
			ans = min(ans, digits(N / i));
		}
	}

	cout << ans << endl;

	return 0;
}
