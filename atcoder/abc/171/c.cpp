#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;

	string ans = "";

	while (N > 0) {
		N--;
		ans.insert(ans.begin(), 'a' + N % 26);
		N /= 26;
	}

	cout << ans << endl;

	return 0;
}
