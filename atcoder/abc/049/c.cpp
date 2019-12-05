#include <bits/stdc++.h>

using namespace std;

int main()
{
	string divide[4] = { "dream", "dreamer", "erase", "eraser" };

	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	for (int i = 0; i < 4; i++) {
		reverse(divide[i].begin(), divide[i].end());
	}

	for (int i = 0; (size_t)i < s.size();) {
		bool isDivide = false;
		for (int j = 0; j < 4; j++) {
			string d = divide[j];
			if (s.substr(i, d.size()) == d) {
				isDivide = true;
				i += d.size();
			}
		}
		if (!isDivide) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
