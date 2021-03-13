#include <bits/stdc++.h>

using namespace std;

#define Q_MAX 200010

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
	int n, q;

	int p[Q_MAX], a[Q_MAX], b[Q_MAX];

	cin >> n >> q;
	for (int i = 0; i < q; i++) {
		cin >> p[i] >> a[i] >> b[i];
	}

	UnionFind uni(n);

	for (int i = 0; i < q; i++) {
		if (p[i] == 0) {
			uni.connect(a[i], b[i]);
		} else {
			if (uni.root(a[i]) == uni.root(b[i])) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}

	return 0;
}
