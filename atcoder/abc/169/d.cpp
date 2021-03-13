#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	ll ans = 0;
	for (ll i = 2; i * i <= N; i++) {
		ll powN = 1;
		ll cnt = 0;
		while (N % i == 0) {
			N /= i;
			cnt++;
			if (cnt >= powN) {
				ans++;
				powN++;
				cnt = 0;
			}
		}
	}

	if (N != 1) {
		ans++;
	}
	cout << ans << endl;

	return 0;
}
