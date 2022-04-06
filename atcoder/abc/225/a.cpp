#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	set<char> st;

	for (size_t i = 0; i < S.size(); i++) {
		st.insert(S[i]);
	}

	if (st.size() == 1) {
		cout << 1 << endl;
	} else if (st.size() == 2) {
		cout << 3 << endl;
	} else {
		cout << 6 << endl;
	}
	return 0;
}
