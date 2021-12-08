#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, S, D;

	cin >> N >> S >> D;
	vector < ll > X(N), Y(N);

	for (int i = 0; i < N; i++) {
		cin >> X[i] >> Y[i];
	}

	for (int i = 0; i < N; i++) {
		if (X[i] < S && Y[i] > D) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}
