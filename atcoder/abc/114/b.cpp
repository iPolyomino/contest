#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int minDiff = INT_MAX;
	for (int i = 0; (size_t)i < s.size() - 2; i++) {
		int ss = atoi(s.substr(i, 3).c_str());
		int diff = abs(ss - 753);
		if (diff < minDiff) {
			minDiff = diff;
		}
	}

	cout << minDiff << endl;
	return 0;
}
