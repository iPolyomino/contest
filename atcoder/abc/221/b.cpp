#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;

	if (S == T) {
		cout << "Yes" << endl;
		return 0;
	}

	for (size_t i = 0; i < S.size() - 1; i++) {
		if (S[i] != T[i]) {
			string ss = S;
			ss[i] = S[i + 1];
			ss[i + 1] = S[i];
			if (ss == T) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;
}
