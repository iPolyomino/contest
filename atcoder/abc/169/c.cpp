#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	long double A, B;
	cin >> A >> B;

	long double BB = B * 100.0;

	ll ans = (A * llround(BB)) / 100;

	cout << ans << endl;

	return 0;
}
