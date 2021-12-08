#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;
	string S;

	cin >> S;

	ll r = 0, g = 0, b = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] == 'R') {
			r++;
		} else if (S[i] == 'G') {
			g++;
		} else if (S[i] == 'B') {
			b++;
		}
	}

	ll ans = r * g * b;

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int k = j + (j - i);
			if (k >= N) {
				continue;
			}
			if (S[i] != S[j] && S[j] != S[k] && S[k] != S[i]) {
				ans--;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
