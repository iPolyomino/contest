#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, W, X, Y;

	cin >> H >> W >> X >> Y;

	X--;
	Y--;

	vector<string> S(H);
	for (int i = 0; i < H; i++) {
		cin >> S[i];
	}

	int ans = 0;

	if (S[X][Y] == '.') {
		ans++;
	}

	// above
	for (int i = X - 1; i >= 0; i-- ) {
		if (S[i][Y] == '.') {
			ans++;
		} else {
			break;
		}
	}


	// below
	for (int i = X + 1; i < H; i++) {
		if (S[i][Y] == '.') {
			ans++;
		} else {
			break;
		}
	}

	// right
	for (int i = Y - 1; i >= 0; i--) {
		if (S[X][i] == '.') {
			ans++;
		} else {
			break;
		}
	}

	// left
	for (int i = Y + 1; i < W; i++) {
		if (S[X][i] == '.') {
			ans++;
		} else {
			break;
		}
	}

	cout << ans << endl;

	return 0;
}
