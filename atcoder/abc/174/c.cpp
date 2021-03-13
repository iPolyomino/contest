#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll K;

	cin >> K;

	vector < ll > a(K);
	a[0] = 7 % K;
	for (int i = 1; i < K; i++) {
		a[i] = (a[i - 1] * 10 + 7) % K;
	}

	for (int i = 0; i < K; i++) {
		if (a[i] == 0) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}
