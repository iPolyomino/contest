#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;
	int ans = 0;
	for (int i = 0; (size_t)i < S.size(); i++) {
		if (S[i] == T[i]) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
