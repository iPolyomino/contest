#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N, 0), B(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			A[0] = B[0];
			continue;
		} else if (i == N - 1) {
			A[i] = B[i - 1];
			continue;
		}

		A[i] = min(B[i - 1], B[i]);
	}

	cout << accumulate(A.begin(), A.end(), 0) << endl;

	return 0;
}
