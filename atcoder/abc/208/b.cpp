#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
	int ret = 1;

	while (n > 1)
		ret *= n--;
	return ret;
}

int main()
{
	int P;

	cin >> P;

	int n = 10;
	int ans = 0;

	while (P > 0) {
		int nFact = factorial(n);
		if (nFact <= P) {
			int cnt = floor(P / nFact);
			P -= factorial(n) * cnt;
			ans += cnt;
		}
		n--;
	}

	cout << ans << endl;

	return 0;
}
