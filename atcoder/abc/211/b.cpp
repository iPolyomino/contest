#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s[4];

	for (int i = 0; i < 4; i++) {
		cin >> s[i];
	}

	set<string>st{ begin(s), end(s) };

	if (st.size() == 4) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
