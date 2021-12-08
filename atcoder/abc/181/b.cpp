#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;
	vector < ll > A(N), B(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		ans += (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
	}

	cout << ans << endl;

	return 0;
}
