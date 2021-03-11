#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < pair < int, int >>A(N), B(N);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		A[i] = make_pair(a, i);
		B[i] = make_pair(b, i);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int ans = max(A[0].first, B[0].first);

	if (A[0].second == B[0].second) {
		ans = A[0].first + B[0].first;
	}

	ans = min(ans, max(A[0].first, B[1].first));
	ans = min(ans, max(A[1].first, B[0].first));

	cout << ans << endl;

	return 0;
}
