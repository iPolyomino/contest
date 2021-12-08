#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	vector < ll > A(N);

	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	ll prod = 1;

	for (ll i = 0; i < N; i++) {
		if (A[i] == 0) {
			cout << 0 << endl;
			return 0;
		}
		if (A[i] <= (ll)1e18 / prod) {
			prod *= A[i];
		} else {
			cout << -1 << endl;
			return 0;
		}

	}

	cout << prod << endl;

	return 0;
}
