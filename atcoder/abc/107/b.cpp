#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;

	vector < vector < char >>a(H, vector < char >(W));
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> a[i][j];
		}
	}

	vector < int >whiteColumn(H);
	vector < int >whiteRow(W);

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (a[i][j] == '#') {
				whiteColumn[i] = 1;
				whiteRow[j] = 1;
			}
		}
	}

	for (int i = 0; i < H; i++) {
		bool enabledRow = false;
		for (int j = 0; j < W; j++) {
			if (whiteColumn[i] == 1 && whiteRow[j] == 1) {
				cout << a[i][j];
				enabledRow = true;
			}
		}
		if (enabledRow)
			cout << "\n";
	}

	return 0;
}
