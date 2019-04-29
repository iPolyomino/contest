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

	sort(A.begin(), A.end());

	int minusCount = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] < 0) {
			minusCount++;
			A[i] *= -1;
		}
	}

	if (minusCount % 2 == 0) {
		cout << accumulate(A.begin(), A.end(), (ll) 0) << endl;
		return 0;
	}

	ll zeroDiff = LLONG_MAX;
	for (int i = 0; i < N; i++) {
		if (A[i] < zeroDiff) {
			zeroDiff = A[i];
		}
	}

	cout << accumulate(A.begin(), A.end(), (ll) 0) - zeroDiff * 2 << endl;

	return 0;
}
