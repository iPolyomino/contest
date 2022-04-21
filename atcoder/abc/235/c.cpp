#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main()
{
	int N, Q;

	cin >> N >> Q;

	vector<int> a(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	vector<int> x(Q);
	vector<int> k(Q);

	for (int i = 0; i < Q; i++) {
		cin >> x[i] >> k[i];
	}

	map<int, vector<int> > freq;

	for (int i = 0; i < N; i++) {
		freq[a[i]].push_back(i + 1);
	}

	for (int i = 0; i < Q; i++) {
		if ((int)freq[x[i]].size() < k[i]) {
			cout << -1 << endl;
		} else {
			cout << freq[x[i]][k[i] - 1] << endl;
		}
	}

	return 0;
}
