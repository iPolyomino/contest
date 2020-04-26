#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector < int >A(M);
	for (int i = 0; i < M; i++) {
		cin >> A[i];
	}
	int sum = accumulate(A.begin(), A.end(), 0);

	if (sum > N) {
		cout << -1 << endl;
	} else {
		cout << N - sum << endl;
	}

	return 0;
}
