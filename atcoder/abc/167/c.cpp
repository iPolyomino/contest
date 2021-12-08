#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M, X;

	cin >> N >> M >> X;

	vector < ll > C(N);
	vector < vector < ll > > A(N, vector < ll > (M));

	for (int i = 0; i < N; i++) {
		cin >> C[i];
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}

	ll cost = LLONG_MAX;

	for (ll bits = 1; bits < (1 << N); bits++) {
		vector < ll > understanding(M);
		for (ll i = 0; i < N; i++) {
			if (((bits >> i) & 1) == 0) {
				continue;
			}
			for (ll j = 0; j < M; j++) {
				understanding[j] += A[i][j];
			}
		}

		bool isOk = true;
		for (ll i = 0; i < M; i++) {
			if (understanding[i] < X) {
				isOk = false;
			}
		}
		if (isOk) {
			ll sum = 0;
			for (ll i = 0; i < N; i++) {
				if (((bits >> i) & 1) == 0) {
					continue;
				}
				sum += C[i];
			}
			cost = min(cost, sum);
		}
	}

	if (cost == LLONG_MAX) {
		cout << -1 << endl;
	} else {
		cout << cost << endl;
	}

	return 0;
}
