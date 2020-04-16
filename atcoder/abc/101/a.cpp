#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int ans = 0;

	for (size_t i = 0; i < S.size(); i++) {
		if (S[i] == '+') {
			ans++;
		} else {
			ans--;
		}
	}

	cout << ans << endl;

	return 0;
}
