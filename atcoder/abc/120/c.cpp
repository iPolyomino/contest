#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int zero, one;
	zero = one = 0;

	for (int i = 0; (size_t)i < s.size(); i++) {
		if (s[i] == '0') {
			zero++;
		} else {
			one++;
		}
	}
	cout << min(zero, one) * 2 << endl;
	return 0;
}
