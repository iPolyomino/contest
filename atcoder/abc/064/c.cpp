#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int rate[9] = { 0 };

	for (int i = 0; i < N; i++) {
		if (a[i] > 3600)
			a[i] = 3599;
		rate[a[i] / 400]++;
	}

	int ans = 0;
	for (int i = 0; i < 8; i++) {
		if (rate[i] != 0) {
			ans++;
		}
	}

	cout << max(1, ans) << " " << ans + rate[8] << endl;

	return 0;
}
