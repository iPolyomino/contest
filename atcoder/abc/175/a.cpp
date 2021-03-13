#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	int ans = 0;
	for (size_t i = 1; i <= S.size(); i++) {
		if (S.find(string(i, 'R')) != string::npos) {
			ans = i;
		}
	}

	cout << ans << endl;
	return 0;
}
