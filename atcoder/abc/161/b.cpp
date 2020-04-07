#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int sum = accumulate(A.begin(), A.end(), 0);
	double border = (double)sum / (4 * M);
	int pop = 0;

	for (int i = 0; i < N; i++) {
		if (A[i] >= border) {
			pop++;
		}
	}

	if (pop >= M) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
