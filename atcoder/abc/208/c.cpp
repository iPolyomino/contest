#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;

	cin >> N >> K;

	vector<ll> a(N);

	for (ll i = 0; i < N; i++) {
		cin >> a[i];
	}


	vector<ll> sa(a.size());
	copy(a.begin(), a.end(), sa.begin());
	sort(sa.begin(), sa.end());

	for (ll i = 0; i < N; i++) {
		if (a[i] < sa[K % N] && K % N != 0) {
			cout << K / N + 1 << endl;
		} else {
			cout << K / N << endl;
		}
	}

	return 0;
}
