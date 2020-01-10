#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M;
	cin >> N >> M;

	vector < ll > a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	ll lcm = 1;
	for (int i = 0; i < N; i++) {
		ll half = a[i] / 2;
		lcm = half * lcm / __gcd(half, lcm);
		if (lcm > M) {
			cout << 0 << endl;
			return 0;
		}
	}

	for (int i = 0; i < N; i++) {
		if (lcm / (a[i] / 2) % 2 == 0) {
			cout << 0 << endl;
			return 0;
		}
	}

	cout << (M / lcm + 1) / 2 << endl;

	return 0;
}
