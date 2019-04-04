#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >h(N);
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (h[i] == 0) {
			continue;
		}
		int w = h[i];
		ans += w;
		for (int j = i; j < N; j++) {
			if (h[j] < w) {
				w = h[j];
			}
			h[j] -= w;
		}
	}

	cout << ans << endl;

	return 0;
}
