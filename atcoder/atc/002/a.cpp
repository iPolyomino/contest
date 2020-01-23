#include <bits/stdc++.h>

using namespace std;

#define MAX_R 100
#define MAX_C 100
#define INF 100000000

typedef pair < int, int >P;

int R, C;
char maze[MAX_R][MAX_C + 1];

int sx, sy;
int gx, gy;
int d[MAX_R][MAX_C];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs()
{
	queue < P > que;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			d[i][j] = INF;
		}
	}
	que.push(P(sx, sy));
	d[sy][sx] = 0;

	while (que.size()) {
		P p = que.front();
		que.pop();
		if (p.first == gx && p.second == gy) {
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if (0 <= nx && nx < C && 0 <= ny && ny < R
			    && maze[ny][nx] != '#' && d[ny][nx] == INF) {
				que.push(P(nx, ny));
				d[ny][nx] = d[p.second][p.first] + 1;
			}
		}
	}
	return d[gy][gx];
}

int main()
{
	cin >> R >> C;

	cin >> sy >> sx;
	sy--;
	sx--;
	cin >> gy >> gx;
	gy--;
	gx--;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> maze[i][j];
		}
	}

	cout << bfs() << endl;
	return 0;
}
