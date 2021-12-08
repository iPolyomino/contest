#include <bits/stdc++.h>

using namespace std;

class UnionFind {
public:
vector < int >parent;

UnionFind(int n)
{
	parent = vector < int >(n, -1);
}
int root(int a)
{
	if (parent[a] < 0) {
		return a;
	}
	return parent[a] = root(parent[a]);
}

int size(int a)
{
	return -parent[root(a)];
}

bool connect(int a, int b)
{
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

	int n, m;

	cin >> n >> m;
	vector < int >a(m), b(m);

	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
	}
	vector < long long >ans(m);

	ans[m - 1] = (long long)n * (n - 1) / 2;

	UnionFind uni(n);

	for (int i = m - 1; i >= 1; i--) {
		ans[i - 1] = ans[i];
		if (uni.root(a[i]) != uni.root(b[i])) {
			ans[i - 1] -=
				(long long)uni.size(a[i]) * uni.size(b[i]);
			uni.connect(a[i], b[i]);
		}
	}

	for (int i = 0; i < m; i++) {
		cout << ans[i] << endl;
	}

	return 0;
}
