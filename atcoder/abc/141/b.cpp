#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	bool easy = true;

	for (int i = 0; (size_t)i < S.size(); i++) {
		if ((i % 2 == 0 && S[i] == 'L') || (i % 2 == 1 && S[i] == 'R')) {
			easy = false;
		}
	}

	if (easy) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
