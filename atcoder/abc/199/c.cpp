#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	string S;

	cin >> S;
	int Q;

	cin >> Q;
	vector<int> T(Q), A(Q), B(Q);

	for (int i = 0; i < Q; i++) {
		cin >> T[i] >> A[i] >> B[i];
		A[i]--;
		B[i]--;
	}

	bool isReverse = false;

	for (int i = 0; i < Q; i++) {
		if (T[i] == 1) {
			if (isReverse) {
				if (A[i] < N) {
					A[i] = A[i] + N;
				} else {
					A[i] = A[i] - N;
				}
				if (B[i] < N) {
					B[i] = B[i] + N;
				} else {
					B[i] = B[i] - N;
				}
			}
			swap(S[A[i]], S[B[i]]);
		} else {
			isReverse = !isReverse;
		}
	}

	if (isReverse) {
		for (size_t i = N; i < S.length(); i++) cout << S[i];
		for (int i = 0; i < N; i++) cout << S[i];
	} else {
		cout << S << endl;
	}

	return 0;
}
