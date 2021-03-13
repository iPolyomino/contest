#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll a, b, x;

	cin >> a >> b >> x;

	ll ans = b / x - a / x;

	if (a % x == 0) {
		ans++;
	}

	cout << ans << endl;
	return 0;
}
