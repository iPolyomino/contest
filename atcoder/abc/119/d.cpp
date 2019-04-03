#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int A, B, Q;
	cin >> A >> B >> Q;

	vector < ll > s(A);
	vector < ll > t(B);
	vector < ll > x(Q);

	for (int i = 0; i < A; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < B; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < Q; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < Q; i++) {
		ll sl, sr, tl, tr;
		sl = -1;
		sr = A;
		tl = -1;
		tr = B;

		while (sr - sl > 1) {
			int mid = (sl + sr) / 2;
			if (s[mid] > x[i]) {
				sr = mid;
			} else {
				sl = mid;
			}
		}
		while (tr - tl > 1) {
			int mid = (tr + tl) / 2;
			if (t[mid] > x[i]) {
				tr = mid;
			} else {
				tl = mid;
			}
		}

		ll ans = LLONG_MAX;
		if (sl >= 0 && tl >= 0) {
			ans = min(ans, max(x[i] - t[tl], x[i] - s[sl]));
		}
		if (sr < A && tr < B) {
			ans = min(ans, max(t[tr] - x[i], s[sr] - x[i]));
		}
		if (sl >= 0 && tr < B) {
			ans = min(ans, (x[i] - s[sl]) * 2 + t[tr] - x[i]);
			ans = min(ans, (t[tr] - x[i]) * 2 + x[i] - s[sl]);
		}
		if (sr < A && tl >= 0) {
			ans = min(ans, (x[i] - t[tl]) * 2 + s[sr] - x[i]);
			ans = min(ans, (s[sr] - x[i]) * 2 + x[i] - t[tl]);
		}
		cout << ans << endl;
	}

	return 0;
}
