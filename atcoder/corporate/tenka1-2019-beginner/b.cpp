#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < char >S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	int K;
	cin >> K;

	for (int i = 0; i < N; i++) {
		if (S[i] != S[K - 1]) {
			S[i] = '*';
		}
	}

	for (auto ss:S) {
		cout << ss;
	}

	cout << "\n";

	return 0;
}
