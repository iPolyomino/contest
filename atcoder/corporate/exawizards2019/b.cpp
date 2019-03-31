#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string s;
	cin >> s;

	int red = 0;

	for (int i = 0; (size_t) i < s.size(); i++) {
		if (s[i] == 'R') {
			red++;
		}
	}

	if (red > N / 2) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
