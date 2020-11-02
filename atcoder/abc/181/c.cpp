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

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (i != j && j != k && i != k) {
					double tiltAB =
					    (y[i] - y[j]) / (x[i] - x[j]);
					double tiltAC =
					    (y[i] - y[k]) / (x[i] - x[k]);
					if (tiltAB == tiltAC) {
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "No" << endl;

	return 0;
}
