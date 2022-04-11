#include <bits/stdc++.h>

using namespace std;

int main()
{
	int L, R;

	cin >> L >> R;
	L--;
	R--;
	string S;

	cin >> S;

	string ans = S;

	for (int i = 0; i < R - L + 1; i++) {
		ans[L + i] = S[R - i];
	}

	cout << ans << endl;
	return 0;
}
