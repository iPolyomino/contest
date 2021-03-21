#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	int comma = 0;
	ll ans = 0;
	ll l = 1, r = 10;

	for (int i = 0; i < 16; i++) {
		if (r <= N) {
			ans += (r - l) * comma;
		} else if (l <= N && N < r) {
			ans += (N - l + 1) * comma;
		}

		l *= 10;
		r *= 10;
		if (i % 3 == 2) {
			comma++;
		}
	}

	cout << ans << endl;

	return 0;
}
