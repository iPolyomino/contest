#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;
	int ans = 0;
	while (1 + (A - 1) * ans < B) {
		ans++;
	}
	cout << ans << endl;
	return 0;
}
