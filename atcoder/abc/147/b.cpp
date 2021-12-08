#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	int ans = 0;

	for (int i = 0; (size_t)i < S.size() / 2; i++) {
		if (S[i] != S[S.size() - 1 - i]) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
