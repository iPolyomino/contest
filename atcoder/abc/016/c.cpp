#include <bits/stdc++.h>

using namespace std;

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

	vector < set < int > >friends(N);
	for (int i = 0; i < M; i++) {
		friends[A[i]].insert(B[i]);
		friends[B[i]].insert(A[i]);
	}

	for (int i = 0; i < N; i++) {
		int ans = 0;
		for (int j = 0; j < N; j++) {
			if (i == j) {
				continue;
			}

			if (friends[i].find(j) != friends[i].end()) {
				continue;
			}

			set < int >result;
			set_difference(friends[i].begin(), friends[i].end(),
				       friends[j].begin(), friends[j].end(),
				       inserter(result, result.end()));
			if (friends[i].size() != result.size()) {
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
