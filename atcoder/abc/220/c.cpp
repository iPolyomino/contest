#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector<ll>A(N);

	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}
	ll X;

	cin >> X;

	ll sm = accumulate(A.begin(), A.end(), 0LL);

	ll ans = X / sm * N;
	ll m = (X / sm) * sm;

	for (ll i = 0; i < N; i++) {
		m += A[i];
		ans++;
		if (m > X) {
			break;
		}
	}

	cout << ans << endl;

	return 0;
}
