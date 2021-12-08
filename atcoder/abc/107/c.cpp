#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N, K;

	cin >> N >> K;
	vector < ll > x(N);

	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	ll minDist = LLONG_MAX;

	for (int i = 0; i <= N - K; i++) {
		ll minus = x[i];
		ll plus = x[i + K - 1];
		ll dist = plus - minus;
		dist += min(abs(minus), abs(plus));
		minDist = min(minDist, dist);
	}

	cout << minDist << endl;

	return 0;
}
