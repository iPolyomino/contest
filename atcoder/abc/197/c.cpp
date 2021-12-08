#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int ans = INT_MAX;

	for (int bits = 0; bits < (1 << (N - 1)); bits++) {
		int xored = 0;
		int ored = 0;
		for (int i = 0; i <= N; i++) {
			if (i < N) ored |= A[i];
			if (i == N || (bits >> i & 1)) xored ^= ored, ored = 0;
		}
		ans = min(ans, xored);
	}

	cout << ans << endl;

	return 0;
}
