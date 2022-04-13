#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll K;

	cin >> K;

	string ans = "";

	while (K > 0) {
		if (K % 2 == 0) {
			ans += "0";
		} else {
			ans += "2";
		}
		K /= 2;
	}

	reverse(ans.begin(), ans.end());
	cout << ans << endl;

	return 0;
}
