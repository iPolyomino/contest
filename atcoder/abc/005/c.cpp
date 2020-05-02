#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, N;
	cin >> T >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int M;
	cin >> M;
	vector < int >B(M);
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	int j = 0;
	vector < int >isOK(M, 0);
	for (int i = 0; i < M; i++) {
		while (j < N && isOK[i] == 0) {
			if (A[j] <= B[i] && B[i] <= A[j] + T) {
				isOK[i] = 1;
			}
			j++;
		}
	}

	if (accumulate(isOK.begin(), isOK.end(), 0) == M) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}

	return 0;
}
