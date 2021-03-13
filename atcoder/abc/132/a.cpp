#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;

	for (int i = 0; (size_t)i < s.size(); i++) {
		if (count(s.begin(), s.end(), s[i]) != 2) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
