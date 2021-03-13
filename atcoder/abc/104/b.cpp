#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	bool startA = S[0] == 'A';
	bool containsC = false;
	bool allSmall = true;

	for (int i = 1; (size_t)i < S.size(); i++) {
		if (S[i] < 'a' || 'z' < S[i]) {
			if (i != 1 && !containsC && S[i] == 'C'
			    && i != int (S.size() - 1)) {
				containsC = true;
				continue;
			}
			allSmall = false;
		}
	}

	if (startA && containsC && allSmall) {
		cout << "AC" << endl;
	} else {
		cout << "WA" << endl;
	}
	return 0;
}
