#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B;

	cin >> A >> B;
	ll gcd = __gcd(A, B);

	ll ans = 0;

	for (ll i = 2; i * i <= gcd; i++) {
		if (gcd % i == 0) {
			ans++;
			while (gcd % i == 0) {
				gcd /= i;
			}
		}
	}

	if (gcd != 1) {
		ans++;
	}

	cout << ans + 1 << endl;

	return 0;
}
