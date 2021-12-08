#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >P(N);

	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	int pMin = INT_MAX;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		pMin = min(P[i], pMin);
		if (pMin == P[i]) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
