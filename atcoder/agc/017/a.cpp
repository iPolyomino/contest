#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, P;

	cin >> N >> P;
	vector < int >A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int oddCount = 0, evenCount = 0;

	for (int i = 0; i < N; i++) {
		if (A[i] % 2 == 0) {
			evenCount++;
		} else {
			oddCount++;
		}
	}

	if (oddCount == 0) {
		if (P == 0) {
			cout << fixed << setprecision(0) << pow(2, N) << endl;
		} else {
			cout << 0 << endl;
		}
		return 0;
	}

	cout << fixed << setprecision(0) << pow(2, N - 1) << endl;

	return 0;
}
