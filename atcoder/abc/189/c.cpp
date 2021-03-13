#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int ans = 0;
	for (int l = 0; l < N; l++) {
		int mi = A[l];
		for (int r = l; r < N; r++) {
			mi = min(mi, A[r]);
			ans = max(ans, mi * (r - l + 1));
		}
	}

	cout << ans << endl;

	return 0;
}
