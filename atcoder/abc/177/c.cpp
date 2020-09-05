#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
	ll N;
	cin >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	ll sum = 0;
	for (int i = 0; i < N; i++) {
		sum += A[i];
		sum %= MOD;
	}

	ll ans = 0;
	for (int i = 0; i < N; i++) {
		sum -= A[i];
		if (sum < 0) {
			sum += MOD;
		}
		ans += A[i] * sum;
		ans %= MOD;
	}

	cout << ans << endl;

	return 0;
}
