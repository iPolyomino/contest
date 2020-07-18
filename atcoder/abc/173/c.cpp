#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, W, K;
	cin >> H >> W >> K;
	vector < string > c(H);
	for (int i = 0; i < H; i++) {
		cin >> c[i];
	}

	int ans = 0;

	for (int bitH = 0; bitH < (1 << H); bitH++) {
		for (int bitW = 0; bitW < (1 << W); bitW++) {
			int black = 0;
			for (int i = 0; i < H; i++) {
				for (int j = 0; j < W; j++) {
					if (((bitH >> i) & 1) == 0
					    && ((bitW >> j) & 1) == 0
					    && c[i][j] == '#') {
						black++;
					}
				}
			}
			if (black == K) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
