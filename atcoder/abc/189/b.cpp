#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;

	vector < int >V(N), P(N);
	for (int i = 0; i < N; i++) {
		cin >> V[i] >> P[i];
	}

	int alcohol = 0;
	for (int i = 0; i < N; i++) {
		alcohol += V[i] * P[i];
		if (alcohol > X * 100) {
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << -1 << endl;

	return 0;
}
