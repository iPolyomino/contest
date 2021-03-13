#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	int start0, start1;
	start0 = start1 = 0;
	char current = '0';
	for (int i = 0; (size_t)i < S.size(); i++) {
		if (S[i] != current) {
			start0++;
		}
		if (current == '0') {
			current = '1';
		} else {
			current = '0';
		}
	}

	current = '1';
	for (int i = 0; (size_t)i < S.size(); i++) {
		if (S[i] != current) {
			start1++;
		}
		if (current == '0') {
			current = '1';
		} else {
			current = '0';
		}
	}

	cout << min(start0, start1) << endl;
	return 0;
}
