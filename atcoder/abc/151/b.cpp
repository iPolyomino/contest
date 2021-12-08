#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K, M;

	cin >> N >> K >> M;
	vector < int >A(N - 1);

	for (int i = 0; i < N - 1; i++) {
		cin >> A[i];
	}

	int sum = accumulate(A.begin(), A.end(), 0);
	int ans = max(M * N - sum, 0);

	if (ans > K) {
		cout << -1 << endl;
	} else {
		cout << ans << endl;
	}

	return 0;
}
