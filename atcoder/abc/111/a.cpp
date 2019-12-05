#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; size_t (i) < s.size(); i++) {
		s[i] = '9' + '1' - s[i];
	}
	cout << s << endl;
	return 0;
}
