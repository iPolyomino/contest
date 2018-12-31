#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int t[110000], x[110000], y[110000];
	cin >> n;
	t[0] = x[0] = y[0] = 0;

	for (int i = 0; i < n; i++) {
		cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
	}

	bool isPossible = true;
	for (int i = 0; i < n; i++) {
		int dt = t[i + 1] - t[i];
		int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
		if (dt < dist) {
			isPossible = false;
			break;
		}
		if (dist % 2 != dt % 2) {
			isPossible = false;
			break;
		}
	}

	if (isPossible) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
