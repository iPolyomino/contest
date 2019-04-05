#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector < int >P(M);
	vector < int >Y(M);

	for (int i = 0; i < M; i++) {
		cin >> P[i] >> Y[i];
	}

	vector < int >v[N + 1];
	for (int i = 0; i < M; i++) {
		v[P[i]].push_back(Y[i]);
	}
	for (int i = 0; i <= N; i++) {
		sort(v[i].begin(), v[i].end());
	}

	for (int i = 0; i < M; i++) {
		cout << setfill('0') << setw(6) << P[i];
		cout << setfill('0') << setw(6) <<
		    lower_bound(v[P[i]].begin(), v[P[i]].end(), Y[i]) -
		    v[P[i]].begin() + 1 << endl;
	}

	return 0;
}
