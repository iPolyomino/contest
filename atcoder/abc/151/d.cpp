#include <bits/stdc++.h>

using namespace std;

#define INF 100000000

typedef pair < int, int >P;

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int main()
{
	int H, W;

	cin >> H >> W;
	vector < string > S(H);
	for (int i = 0; i < H; i++) {
		cin >> S[i];
	}

	int ans = 0;

	for (int si = 0; si < H; si++) {
		for (int sj = 0; sj < W; sj++) {
			if (S[si][sj] == '#')
				continue;
			vector < vector < int > >dist(H, vector < int >(W, INF));
			dist[si][sj] = 0;

			queue < P > q;
			q.push(P(si, sj));
			while (!q.empty()) {
				P p = q.front();
				q.pop();
				for (int idx = 0; idx < 4; idx++) {
					int dx = p.second + dj[idx];
					int dy = p.first + di[idx];
					if (0 <= dx && dx < W && 0 <= dy
					    && dy < H && S[dy][dx] != '#'
					    && dist[dy][dx] == INF) {
						dist[dy][dx] =
							dist[p.first][p.second] + 1;
						q.push(P(dy, dx));
					}
				}
			}

			for (int i = 0; i < H; i++) {
				for (int j = 0; j < W; j++) {
					if (dist[i][j] != INF) {
						ans = max(ans, dist[i][j]);
					}
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}
