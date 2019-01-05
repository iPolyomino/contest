#include <bits/stdc++.h>

using namespace std;

#define filter 1.0e9 + 7

int main()
{
	int n, m;
	cin >> n >> m;

	if (abs(n - m) > 1) {
		cout << 0 << endl;
		return 0;
	}

	long long pattern = 1;

	if ((n + m) % 2 == 0) {
		pattern *= 2;
	}

	for (int i = 1; i <= n; i++) {
		pattern *= i;
		pattern %= (long long)filter;
	}
	for (int i = 1; i <= m; i++) {
		pattern *= i;
		pattern %= (long long)filter;
	}

	cout << pattern << endl;

	return 0;
}
