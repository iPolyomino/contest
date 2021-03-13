#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > gcdl(N, 1);
	vector < ll > gcdr(N, 1);

	gcdl[0] = A[0];
	for (int i = 1; i < N; i++) {
		gcdl[i] = __gcd(gcdl[i - 1], A[i]);
	}

	gcdr[N - 1] = A[N - 1];
	for (int i = N - 2; i >= 0; i--) {
		gcdr[i] = __gcd(gcdr[i + 1], A[i]);
	}

	ll ans = 1;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			ans = max(ans, gcdr[i + 1]);
		} else if (i == N - 1) {
			ans = max(ans, gcdl[i - 1]);
		} else {
			ans = max(ans, __gcd(gcdl[i - 1], gcdr[i + 1]));
		}
	}

	cout << ans << endl;

	return 0;
}
