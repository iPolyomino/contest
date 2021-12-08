#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	string S;

	cin >> S;

	int white = 0, black = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] == '.') {
			white++;
		}
	}

	int ans = white;

	for (int i = 0; i < N; i++) {
		if (S[i] == '.') {
			white--;
		}
		if (S[i] == '#') {
			black++;
		}
		ans = min(ans, white + black);
	}

	cout << ans << endl;

	return 0;
}
