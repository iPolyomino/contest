#include <bits/stdc++.h>

using namespace std;

int N, A, B, C;
vector < int >l;

int ans = INT_MAX;

int calc(vector < int >v)
{
	int mp = 0;
	pair < int, int >p[4];
	for (int i = 0; i < 4; i++) {
		// count and length
		p[i] = make_pair(0, 0);
	}

	for (int i = 0; i < N; i++) {
		p[v[i]] = make_pair(p[v[i]].first + 1, p[v[i]].second + l[i]);
	}

	// only A, B, C
	for (int i = 0; i < 3; i++) {
		if (p[i].first == 0) {
			// cannot make from nothing
			return INT_MAX;
		} else {
			mp += (p[i].first - 1) * 10;
		}
	}
	mp += abs(p[0].second - A);
	mp += abs(p[1].second - B);
	mp += abs(p[2].second - C);

	return mp;
}

void dfs(vector < int >v)
{
	if (v.size() == (size_t) N) {
		int mp = calc(v);
		if (mp < ans) {
			ans = mp;
		}
	} else {
		for (int i = 0; i < 4; i++) {
			vector < int >vv = v;
			vv.push_back(i);
			dfs(vv);
		}
	}
}

int main()
{
	cin >> N >> A >> B >> C;

	for (int i = 0; i < N; i++) {
		int size;
		cin >> size;
		l.push_back(size);
	}

	dfs(vector < int >());

	cout << ans << endl;

	return 0;
}
