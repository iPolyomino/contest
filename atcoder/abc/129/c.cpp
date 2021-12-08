#include <bits/stdc++.h>

using namespace std;

#define MOD 1'000'000'007

int main()
{
	int N, M;

	cin >> N >> M;

	vector < int >a(M);

	for (int i = 0; i < M; i++) {
		cin >> a[i];
		a[i]--;
	}

	vector < int >route(N, 0);

	for (int i = 0, ai = 0; i < N; i++) {

		if (ai < M && i == a[ai]) {
			ai++;
			continue;
		}

		if (i == 0) {
			route[i] = 1;
		} else if (i == 1) {
			route[i] = 1 + route[i - 1];
		} else {
			route[i] = (route[i - 2] + route[i - 1]) % MOD;
		}
	}

	cout << route[N - 1] << endl;

	return 0;
}
