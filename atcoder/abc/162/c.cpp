#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int K;

	cin >> K;

	ll ans = 0;

	for (int i = 1; i <= K; i++) {
		for (int j = 1; j <= K; j++) {
			for (int k = 1; k <= K; k++) {
				ans += __gcd(__gcd(i, j), k);
			}
		}
	}

	cout << ans << endl;

	return 0;
}
