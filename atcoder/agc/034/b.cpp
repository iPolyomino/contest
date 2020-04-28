#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	string s;
	cin >> s;

	ll aCount = 0;
	ll ans = 0;

	if (s.size() < 3) {
		cout << 0 << endl;
		return 0;
	}

	for (size_t i = 0; i < s.size() - 2; i++) {
		if (s[i] == 'A') {
			aCount++;
		} else {
			aCount = 0;
		}

		if (s.substr(i, 3) == "ABC") {
			ans += aCount;
			s[i + 2] = 'A';
			i++;
			aCount--;
		}
	}

	cout << ans << endl;

	return 0;
}
