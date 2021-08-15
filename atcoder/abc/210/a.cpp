#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A, X, Y;

	cin >> N >> A >> X >> Y;

	int ans;
	ans = X * N;

	if (N > A) {
		ans -= (N - A) * (X - Y);
	}

	cout << ans << endl;

	return 0;
}
