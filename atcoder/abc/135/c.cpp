#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;
	cin >> N;
	vector < int >A(N + 1), B(N);
	for (int i = 0; i < N + 1; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	ll ans = 0;
	for (int i = 0; i < N + 1; i++) {
		ll sub = min(A[i], B[i]);
		B[i] -= sub;
		ans += sub;

		sub = min(B[i], A[i + 1]);
		A[i + 1] -= sub;
		ans += sub;
	}

	cout << ans << endl;

	return 0;
}
