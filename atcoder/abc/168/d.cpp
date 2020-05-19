#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector < vector < int >>path(N + 1);
	for (int i = 1; i <= M; i++) {
		int a, b;
		cin >> a >> b;
		path[a].push_back(b);
		path[b].push_back(a);
	}

	vector < int >dist(N + 1, INT_MAX);
	vector < int >prev(N + 1, INT_MAX);
	dist[1] = 0;

	queue < int >que;
	que.push(1);

	while (!que.empty()) {
		int n = que.front();
		que.pop();
		for (size_t i = 0; i < path[n].size(); i++) {
			if (dist[path[n][i]] != INT_MAX) {
				continue;
			}
			dist[path[n][i]] = dist[n] + 1;
			prev[path[n][i]] = n;
			que.push(path[n][i]);
		}
	}

	cout << "Yes" << endl;
	for (int i = 2; i <= N; i++) {
		cout << prev[i] << endl;
	}

	return 0;
}
