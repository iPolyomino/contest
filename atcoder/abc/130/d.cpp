#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;
	cin >> N >> K;
	vector < ll > a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	long long ans = 0;

	int l, r;
	l = r = 0;

	ll sum = a[0];

	while (r < N) {
		if (sum < K) {
			r++;
			sum += a[r];
		} else {
			ans += N - r;
			sum -= a[l];
			l++;
		}
	}

	cout << ans << endl;

	return 0;
}
