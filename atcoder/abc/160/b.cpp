#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X;
	cin >> X;
	int fiveHundredYen = X / 500;
	int ans = fiveHundredYen * 1000;
	int fiveYen = (X - 500 * fiveHundredYen) / 5;
	ans += fiveYen * 5;

	cout << ans << endl;
	return 0;
}
