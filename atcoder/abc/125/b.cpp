#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >V(N);
	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}
	vector < int >C(N);
	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (C[i] < V[i]) {
			ans += V[i] - C[i];
		}
	}
	cout << ans << endl;

	return 0;
}
