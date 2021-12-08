#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector<ll> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	map<ll, ll> counter;

	for (int i = 0; i < N; i++) {
		auto it = counter.find(A[i]);
		if (it == counter.end()) {
			counter.insert(pair<ll, ll>(A[i], 1));
		} else {
			(it->second)++;
		}
	}

	ll ans = N * (N - 1) / 2;

	for (auto &c : counter) {
		if (c.second > 1) {
			ans -= (c.second - 1) * c.second / 2;
		}
	}

	cout << ans << endl;

	return 0;
}
