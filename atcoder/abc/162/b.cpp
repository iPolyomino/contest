#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	ll ans = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			continue;
		}
		ans += i;
	}

	cout << ans << endl;

	return 0;
}
