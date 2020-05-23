#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;
	cin >> S;

	int lparen = 0, rparen = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] == '(') {
			lparen++;
		} else {
			if (lparen > 0) {
				lparen--;
			} else {
				rparen++;
			}
		}
	}

	for (int i = 0; i < rparen; i++) {
		cout << "(";
	}

	cout << S;

	for (int i = 0; i < lparen; i++) {
		cout << ")";
	}

	cout << "\n";
	return 0;
}
