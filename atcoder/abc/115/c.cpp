#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	int h[100000];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}

	sort(h, h + n, greater < int >());

	int min_diff = INT_MAX;

	for (int i = 0; i < n - k + 1; i++) {
		int diff = h[i] - h[i + k - 1];
		if (diff < min_diff) {
			min_diff = diff;
		}
	}

	cout << min_diff << endl;
	return 0;
}
