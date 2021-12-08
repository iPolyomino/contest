#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;

	int current, maxLength;

	current = maxLength = 0;

	for (int i = 0; (size_t)i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
			current++;
			if (maxLength < current) {
				maxLength = current;
			}
		} else {
			current = 0;
		}
	}

	cout << maxLength << endl;

	return 0;
}
