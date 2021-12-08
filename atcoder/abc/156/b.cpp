#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	int ans = 1;

	while (pow(K, ans) <= N) {
		ans++;
	}
	cout << ans << endl;

	return 0;
}
