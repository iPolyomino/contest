#include <bits/stdc++.h>

using namespace std;

int dx[] = { 0, 1, 0, 1 };
int dy[] = { 0, 0, 1, 1 };

int main()
{
	int H, W;

	cin >> H >> W;

	vector<vector<char> > S(H, vector<char>(W));
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> S[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < H - 1; i++) {
		for (int j = 0; j < W - 1; j++) {
			int black = 0;
			for (int k = 0; k < 4; k++) {
				if (S[i + dy[k]][j + dx[k]] == '#') {
					black++;
				}
			}
			if (black == 1 || black == 3) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
