#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A, B, W;

	cin >> A >> B >> W;


	int mx = 0, mn = INT_MAX;

	for (int i = 1; i <= 1000000; i++) {
		if (A * i <= 1000 * W && 1000 * W <= B * i) {
			mx = max(mx, i);
			mn = min(mn, i);
		}
	}

	if (mx == 0) {
		cout << "UNSATISFIABLE" << endl;
	} else {
		cout << mn << " " << mx << endl;
	}

	return 0;
}
