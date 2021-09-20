#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> A(N);
	vector<int> B(M);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int j = 0; j < M; j++) {
		cin >> B[j];
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int i, j;
	i = j = 0;

	int minDiff = INT_MAX;

	while (i < N && j < M) {
		int diff = abs(A[i] - B[j]);
		if ( diff < minDiff) {
			minDiff = diff;
		}
		if (A[i] < B[j]) {
			i++;
		} else {
			j++;
		}
	}

	cout << minDiff << endl;

	return 0;
}
