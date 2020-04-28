#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
		cout << 0 << endl;
	} else {
		ll ans = min(a * b, min(b * c, c * a));
		cout << ans << endl;
	}

	return 0;
}
