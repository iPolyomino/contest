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
	int N, M;

	cin >> N >> M;

	vector < int >A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A[i] >> B[i];
		A[i]--;
		B[i]--;
	}

	UnionFind uf(N);

	for (int i = 0; i < M; i++) {
		uf.connect(A[i], B[i]);
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(ans, uf.size(i));
	}

	cout << ans << endl;

	return 0;
}
