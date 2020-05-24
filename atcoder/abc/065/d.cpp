#include <bits/stdc++.h>

using namespace std;

#define ll long long

class UnionFind {
 public:
	vector < int >parent;

	 UnionFind(int n) {
		parent = vector < int >(n, -1);
	} int root(int a) {
		if (parent[a] < 0) {
			return a;
		}
		return parent[a] = root(parent[a]);
	}

	int size(int a) {
		return -parent[root(a)];
	}

	bool connect(int a, int b) {
		a = root(a);
		b = root(b);
		if (a == b) {
			return false;
		}
		if (size(a) < size(b)) {
			swap(a, b);
		}

		parent[a] += parent[b];
		parent[b] = a;

		return true;
	}

};

int main()
{
	int N;
	cin >> N;
	vector < pair < pair < ll, ll >, int >>x(N), y(N);

	for (int i = 0; i < N; i++) {
		ll xx, yy;
		cin >> xx >> yy;
		x[i] = make_pair(make_pair(xx, yy), i);
		y[i] = make_pair(make_pair(yy, xx), i);
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	priority_queue < pair < ll, pair < int, int >>>q;

	for (int i = 0; i < N - 1; i++) {
		ll fs = abs(x[i].first.first - x[i + 1].first.first);
		ll sc = abs(x[i].first.second - x[i + 1].first.second);
		q.push( {
		       -min(fs, sc), {
		       x[i].second, x[i + 1].second}});

		fs = abs(y[i].first.first - y[i + 1].first.first);
		sc = abs(y[i].first.second - y[i + 1].first.second);
		q.push( {
		       -min(fs, sc), {
		       y[i].second, y[i + 1].second}});
	}

	ll ans = 0;

	UnionFind uni(N);

	while (!q.empty()) {
		pair < ll, pair < int, int >>nq;
		nq = q.top();
		q.pop();
		ll cost = -nq.first;
		int i = nq.second.first, j = nq.second.second;
		if (uni.connect(i, j)) {
			ans += cost;
		}
	}
	cout << ans << endl;

	return 0;
}
