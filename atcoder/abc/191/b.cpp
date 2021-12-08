#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, X;

	cin >> N >> X;

	vector < ll > A(N);

	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (ll i = 0; i < N; i++) {
		if (A[i] != X) {
			cout << " " << A[i];
		}
	}

	cout << "\n";

	return 0;
}
