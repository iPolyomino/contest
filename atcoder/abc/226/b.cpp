#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> L(N);
	set<vector<int> > a;

	for (int i = 0; i < N; i++) {
		cin >> L[i];
		vector<int> v(L[i]);
		for (auto& x : v) cin >> x;
		a.insert(v);
	}

	cout << a.size() << endl;

	return 0;
}
