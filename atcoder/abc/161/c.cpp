#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;

	cin >> N >> K;

	ll nMod = N % K;

	ll ans = min(min(N, abs(N - K)), min(nMod, abs(nMod - K)));

	cout << ans << endl;

	return 0;
}
