#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int ans;
	ans = A + B + C;

	int m = max(A, max(B, C));
	ans += m * 10 - m;

	cout << ans << endl;

	return 0;
}
