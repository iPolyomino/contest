#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool contain7(string num)
{
	for (size_t i = 0; i < num.size(); i++) {
		if (num[i] == '7') {
			return true;
		}
	}
	return false;
}

int main()
{
	ll N;

	cin >> N;

	int ans = 0;

	for (int i = 1; i <= N; i++) {
		ostringstream str;
		str << oct << i;
		if (!contain7(to_string(i)) && !contain7(str.str())) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
