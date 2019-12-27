#include <bits/stdc++.h>

using namespace std;

bool is_integer(double x)
{
	return floor(x) == x;
}

int main()
{
	int N, D;
	cin >> N >> D;
	vector < vector < int >>X(N, vector < int >(D));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < D; j++) {
			cin >> X[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double sum = 0;
			for (int k = 0; k < D; k++) {
				sum += pow(X[i][k] - X[j][k], 2);
			}
			if (is_integer(sqrt(sum))) {
				ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
