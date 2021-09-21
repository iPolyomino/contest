#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	string ans;

	while (N > 0) {
		if (N % 2) {
			ans += 'A';
			N--;
		} else {
			ans += 'B';
			N /= 2;
		}
	}

	reverse(ans.begin(), ans.end());

	cout << ans << endl;
	return 0;
}
