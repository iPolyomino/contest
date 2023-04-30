#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	int x = 0, y = 0;

	for (size_t i = 0; i  < S.size(); i++) {
		if (S[i] == 'a') {
			x++;
		} else {
			break;
		}
	}

	for (size_t i = S.size() - 1; i >= 0; i--) {
		if (S[i] == 'a') {
			y++;
		} else {
			break;
		}
	}

	if (x == S.size()) {
		cout << "Yes" << endl;
		return 0;
	}
	if (x > y) {
		cout << "No" << endl;
		return 0;
	}
	for (int i = x; i < (S.size() - y); i++) {
		if (S[i] != S[x + S.size() - y - i - 1]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}
