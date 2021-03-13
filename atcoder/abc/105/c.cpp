#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int a = N;

	string ans;
	if (a == 0) {
		ans = "0";
	}

	while (a != 0) {
		if (a % 2 == 0) {
			ans = "0" + ans;
		} else {
			ans = "1" + ans;
			a--;
		}
		a /= -2;
	}

	cout << ans << endl;

	return 0;
}
