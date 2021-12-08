#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<pair<double, double> > lr(N);

	for (int i = 0; i < N; i++) {
		int t = 0;
		cin >> t >> lr[i].first >> lr[i].second;
		if (t == 2) {
			lr[i].second -= 0.5;
		} else if (t == 3) {
			lr[i].first += 0.5;
		} else if (t == 4) {
			lr[i].first += 0.5;
			lr[i].second -= 0.5;
		}
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (max(lr[i].first, lr[j].first) <= min(lr[i].second, lr[j].second)) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
