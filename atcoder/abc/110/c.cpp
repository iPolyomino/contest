#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	map < char, char >mps;
	map < char, char >mpt;

	for (int i = 0; (size_t)i < s.size(); i++) {
		auto its = mps.find(s[i]);
		auto itt = mpt.find(t[i]);
		if (its != mps.end() && its->second != t[i]) {
			cout << "No" << endl;
			return 0;
		}
		if (itt != mpt.end() && itt->second != s[i]) {
			cout << "No" << endl;
			return 0;
		}

		mps[s[i]] = t[i];
		mpt[t[i]] = s[i];
	}

	cout << "Yes" << endl;
	return 0;
}
