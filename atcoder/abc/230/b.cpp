#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	string base = "oxx";
	int diff = 0;
	int i = 0;

	while (diff < S.size() && S[diff] != 'o') {
		diff++;
	}

	if (diff > 2) {
		cout << "No" << endl;
		return 0;
	}

	while (i + diff < S.size()) {
		if (S[i + diff] != base[i % base.size()]) {
			cout << "No" << endl;
			return 0;
		}
		i++;
	}

	cout << "Yes" << endl;

	return 0;
}
