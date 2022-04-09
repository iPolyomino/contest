#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, Q;

	cin >> N >> Q;
	vector<ll> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector<ll>x(Q);

	for (int i  = 0; i < Q; i++) {
		cin >> x[i];
	}

	sort(A.begin(), A.end());

	for (int i  = 0; i < Q; i++) {
		ll ans = A.end() - lower_bound(A.begin(), A.end(), x[i]);
		cout << ans << endl;
	}

	return 0;
}
