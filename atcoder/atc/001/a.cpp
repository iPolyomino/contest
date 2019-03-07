#include <bits/stdc++.h>

using namespace std;

#define MAX_H 510
#define MAX_W 510

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

char city[MAX_W][MAX_H];
int startX, startY;

int H, W;

bool isSolved = false;

void dfs(int x, int y)
{
	city[x][y] = '#';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx && nx < W && 0 <= ny && ny < H
		    && city[nx][ny] == 'g') {
			isSolved = true;
			return;
		}

		if (0 <= nx && nx < W && 0 <= ny && ny < H
		    && city[nx][ny] == '.') {
			dfs(nx, ny);
		}
	}
}

int main()
{
	cin >> H >> W;
	for (int i = 0; i < W; i++) {
		for (int j = 0; j < H; j++) {
			cin >> city[i][j];
			if (city[i][j] == 's') {
				startX = i;
				startY = j;
			}
		}
	}

	dfs(startX, startY);

	if (isSolved) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
