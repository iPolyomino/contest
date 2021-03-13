#include <bits/stdc++.h>

using namespace std;

int main()
{
	int64_t L;

	cin >> L;

	__int128_t ans = 1;
	for (int i = 0; i < 11; i++) {
		ans *= L - i - 1;
	}
	for (int i = 0; i < 11; i++) {
		ans /= i + 1;
	}
	cout << (int64_t)ans << endl;

	return 0;
}
