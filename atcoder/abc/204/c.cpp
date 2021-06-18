#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > G;

set<int> visited;

void dfs(int v)
{
	if (visited.count(v)) return;

	visited.insert(v);
	for (size_t i = 0; i < G[v].size(); i++) {
		dfs(G[v][i]);
	}

	return;
}

int main()
{
	int N, M;

	cin >> N >> M;

	G.resize(N);
	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		G[A - 1].push_back(B - 1);
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		visited.clear();
		dfs(i);
		ans += visited.size();
	}

	cout << ans << endl;

	return 0;
}
