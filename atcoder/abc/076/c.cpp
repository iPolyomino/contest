#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;
	cin >> S >> T;

	int okIndex = -1;

	if (S.size() < T.size()) {
		cout << "UNRESTORABLE" << endl;
		return 0;
	}

	for (size_t i = 0; i <= S.size() - T.size(); i++) {
		bool isOK = true;
		string sb = S.substr(i, T.size());
		for (size_t j = 0; j < T.size(); j++) {
			if (sb[j] != T[j] && sb[j] != '?') {
				isOK = false;
			}
		}
		if (isOK) {
			okIndex = i;
		}
	}

	if (okIndex != -1) {
		for (size_t k = 0; k < S.size(); k++) {
			if ((size_t)okIndex <= k && k < okIndex + T.size()) {
				cout << T[k - okIndex];
			} else if (S[k] == '?') {
				cout << 'a';
			} else {
				cout << S[k];
			}
		}
		cout << "\n";
		return 0;
	}

	cout << "UNRESTORABLE" << endl;
	return 0;
}
