#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, D;

	cin >> N >> D;
	vector < double >X(N), Y(N);

	for (int i = 0; i < N; i++) {
		cin >> X[i] >> Y[i];
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (sqrt(pow(X[i], 2) + pow(Y[i], 2)) <= D) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
