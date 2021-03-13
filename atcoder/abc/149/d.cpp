#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	int R, S, P;
	cin >> R >> S >> P;
	string T;
	cin >> T;

	int score = 0;
	for (int i = 0; i < N; i++) {
		if (K <= i && T[i] == T[i - K]) {
			T[i] = '0';
			continue;
		}

		if (T[i] == 'r') {
			score += P;
		}
		if (T[i] == 's') {
			score += R;
		}
		if (T[i] == 'p') {
			score += S;
		}
	}

	cout << score << endl;
	return 0;
}
