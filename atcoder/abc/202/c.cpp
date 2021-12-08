#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector<int> A(N), B(N), C(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		A[i]--;
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
		B[i]--;
	}
	for (int i = 0; i < N; i++) {
		cin >> C[i];
		C[i]--;
	}

	vector<int> cnt(N + 10, 0);

	for (int i = 0; i < N; i++) {
		cnt[B[C[i]]]++;
	}


	ll ans = 0;

	for (int i = 0; i < N; i++) {
		ans += cnt[A[i]];
	}

	cout << ans << endl;
	return 0;
}
