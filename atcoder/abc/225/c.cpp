#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N, M;

	cin >> N >> M;

	vector<vector<ll> > B(N, vector<ll>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> B[i][j];
		}
	}

	vector<vector<int> > div(N, vector<int>(M)), mod(N, vector<int>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			div[i][j] = (B[i][j] + 6) / 7;
			mod[i][j] = (B[i][j] - 1) % 7 + 1;
		}
	}

	bool ok = true;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (0 < i && div[i][j] != div[i - 1][j] + 1) ok = false;
			if (0 < j && mod[i][j] != mod[i][j - 1] + 1) ok = false;
			if (0 < j && div[i][j] != div[i][j - 1]) ok = false;
			if (0 < i && mod[i][j] != mod[i - 1][j]) ok = false;
		}
	}

	if (ok) {
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}
