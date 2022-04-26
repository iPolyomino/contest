#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<string> S(N);
	vector<string> T(M);

	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> T[i];
	}

	set<string> express;

	for (int i = 0; i < M; i++) {
		express.insert(T[i]);
	}

	for (int i = 0; i < N; i++) {
		if (express.find(S[i]) == express.end()) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}

	return 0;
}
