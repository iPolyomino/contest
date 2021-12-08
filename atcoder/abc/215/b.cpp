#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
	ll N;

	cin >> N;

	int ans = 0;

	while (N > 1) {
		N /= 2;
		ans++;
	}

	cout << ans << endl;

	return 0;
}
