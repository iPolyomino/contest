#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;
	cin >> N;
	vector < ll > H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		ll currentHeight = H[i];
		int step = 0;
		for (int j = i + 1; H[j] <= currentHeight && j < N; j++) {
			step++;
			currentHeight = H[j];
		}
		i += step;
		ans = max(ans, step);
	}

	cout << ans << endl;
	return 0;
}
