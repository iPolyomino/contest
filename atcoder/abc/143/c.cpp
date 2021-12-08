#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	string S;

	cin >> S;

	int ans = 1;
	char current = S[0];

	for (int i = 1; i < N; i++) {
		if (current != S[i]) {
			ans++;
			current = S[i];
		}
	}

	cout << ans << endl;

	return 0;
}
