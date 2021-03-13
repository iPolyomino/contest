#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	bool isDifficult = true;

	for (size_t i = 0; i < S.size(); i++) {
		if (i % 2 == 0) {
			if ('A' <= S[i] && S[i] <= 'Z') {
				isDifficult = false;
			}
		} else {
			if ('a' <= S[i] && S[i] <= 'z') {
				isDifficult = false;
			}
		}
	}

	if (isDifficult) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
