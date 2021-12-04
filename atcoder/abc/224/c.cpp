#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector <pair<ll, ll> > XY(N);

	for (int i = 0; i < N; i++) {
		cin >> XY[i].first >> XY[i].second;
	}

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				ll a = (XY[j].first - XY[i].first) * (XY[k].second - XY[i].second);
				ll b = (XY[k].first - XY[i].first) * (XY[j].second - XY[i].second);
				if (a - b != 0) {
					ans++;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}
