#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M, T;
	cin >> N >> M >> T;

	vector < ll > A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A[i] >> B[i];
	}

	ll battery = N;
	ll time = 0;
	bool isOK = true;

	for (int i = 0; i < M; i++) {
		battery -= (A[i] - time);
		if (battery <= 0) {
			isOK = false;
			break;
		}
		battery = min(B[i] - A[i] + battery, N);
		time = B[i];
	}

	battery -= T - time;

	if (battery <= 0 || !isOK) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	return 0;
}
