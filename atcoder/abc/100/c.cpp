#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > a(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		while (a[i] % 2 == 0) {
			a[i] /= 2;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
