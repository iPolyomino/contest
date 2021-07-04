#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	ll ans = 0;
	for (ll i = 1; i <= N; i++) {
		ans += i;
		if (i * i + i >= 2 * N) {
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}
