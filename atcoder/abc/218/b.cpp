#include <bits/stdc++.h>

using namespace std;

int main()
{
	int P[26];

	for (int i = 0; i < 26; i++ ) {
		cin >> P[i];
		P[i]--;
	}

	for (int i = 0; i < 26; i++) {
		cout << char('a' + P[i]);
	}

	cout << "\n";

	return 0;
}
