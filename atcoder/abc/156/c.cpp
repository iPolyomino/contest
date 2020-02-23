#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >X(N);
	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}

	sort(X.begin(), X.end());

	int ans = INT_MAX;

	for (int i = 1; i <= 100; i++) {
		int cost = 0;
		for (int j = 0; j < N; j++) {
			cost += pow(X[j] - i, 2);
		}
		ans = min(cost, ans);
	}

	cout << ans << endl;

	return 0;
}
