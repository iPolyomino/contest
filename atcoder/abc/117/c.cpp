#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector < int >X(M);
	for (int i = 0; i < M; i++) {
		cin >> X[i];
	}

	sort(X.begin(), X.end());

	vector < int >diff(M - 1);
	for (int i = 0; i < M - 1; i++) {
		diff[i] = X[i + 1] - X[i];
	}

	sort(diff.begin(), diff.end());

	for (int i = 0; i < N - 1 && diff.size(); i++) {
		diff.pop_back();
	}

	int ans = accumulate(diff.begin(), diff.end(), 0);
	cout << ans << endl;

	return 0;
}
