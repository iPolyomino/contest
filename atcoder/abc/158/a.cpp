#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	if (S.find('A') != string::npos && S.find('B') != string::npos) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
