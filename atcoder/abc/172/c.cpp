#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M, K;
	cin >> N >> M >> K;

	vector < ll > A(N), B(M);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	vector < ll > SumA(N + 1), SumB(M + 1);
	SumA[0] = 0;
	SumB[0] = 0;
	for (int i = 0; i < N; i++) {
		SumA[i + 1] = SumA[i] + A[i];
	}

	for (int i = 0; i < M; i++) {
		SumB[i + 1] = SumB[i] + B[i];
	}

	ll ans = 0;
	ll j = M;

	for (ll i = 0; i <= N; i++) {
		if (SumA[i] > K) {
			break;
		}
		while (SumB[j] > K - SumA[i]) {
			j--;
		}
		ans = max(ans, i + j);
	}

	cout << ans << endl;

	return 0;
}
