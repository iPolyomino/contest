#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;

	int textLength = S.size();

	for (int i = 0; i < textLength; i++) {
		bool isMatch = true;
		for (int j = 0; j < textLength; j++) {
			if (S[j % textLength] != T[(i + j) % textLength]) {
				isMatch = false;
			}
		}
		if (isMatch) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}
