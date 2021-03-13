#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N), P(N), X(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> P[i] >> X[i];
	}

	int ans = -1;

	for (int i = 0; i < N; i++) {
		if (A[i] < X[i]) {
			if (ans == -1) {
				ans = P[i];
			} else {
				ans = min(ans, P[i]);
			}
		}
	}

	cout << ans << endl;

	return 0;
}
