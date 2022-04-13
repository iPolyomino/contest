#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<pair<double, double> > xy(N);

	for (int i = 0; i < N; i++) {
		cin >> xy[i].first >> xy[i].second;
	}

	double maxDiff = 0;

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double diff = sqrt(pow(xy[i].first - xy[j].first, 2) + pow(xy[i].second - xy[j].second, 2));
			if (diff > maxDiff) {
				maxDiff = diff;
			}
		}
	}
	cout << fixed << setprecision(15) << maxDiff << endl;

	return 0;
}
