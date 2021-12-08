#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < double >x(N), y(N);

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	int ans = 0;

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double tilt = (y[i] - y[j]) / (x[i] - x[j]);
			if (tilt <= 1 && tilt >= -1) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
