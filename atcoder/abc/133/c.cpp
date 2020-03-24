#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll L, R;
	cin >> L >> R;
	ll ans = 2019;
	for (int i = L; i < R && i - L <= 2019; i++) {
		for (int j = i + 1; j <= R && j - L <= 2019; j++) {
			ans = min(ans, (ll) i * j % 2019);
		}
	}

	cout << ans << endl;

	return 0;
}
