#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	ll ans = 0;

	for (ll A = 1; A * A * A <= N; A++) {
		for (ll B = A; A * B * B <= N; B++) {
			ans += floor(N / (A * B)) - B + 1;
		}
	}

	cout << ans << endl;

	return 0;
}
