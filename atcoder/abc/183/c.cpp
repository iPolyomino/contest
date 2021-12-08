#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;

	cin >> N >> K;

	vector < vector < ll > > T(N, vector < ll > (N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> T[i][j];
		}
	}

	vector < ll > num(N);

	for (int i = 0; i < N; i++) {
		num[i] = i;
	}

	ll ans = 0;

	do {
		ll sum = 0;

		if (num[0] != 0) {
			continue;
		}

		for (int i = 0; i < N; i++) {
			sum += T[num[i]][num[(i + 1) % N]];
		}
		if (sum == K) {
			ans++;
		}

	} while (next_permutation(num.begin(), num.end()));

	cout << ans << endl;

	return 0;
}
