#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > cnt(N + 1, 0);
	for (int i = 0; i < N; i++) {
		cnt[A[i]]++;
	}

	vector < ll > combi(N + 1, 0);
	ll totalCombi = 0;
	for (int i = 1; i <= N; i++) {
		combi[i] = cnt[i] * (cnt[i] - 1) / 2;
		totalCombi += combi[i];
	}

	for (int i = 0; i < N; i++) {
		ll ans = totalCombi - combi[A[i]];
		ans += (cnt[A[i]] - 1) * (cnt[A[i]] - 2) / 2;
		cout << ans << endl;
	}

	return 0;
}
