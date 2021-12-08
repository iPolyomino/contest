#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C, K;

	cin >> A >> B >> C >> K;

	int ans = 0;

	if (K <= A) {
		ans = K;
	} else if (K <= A + B) {
		ans = A;
	} else {
		ans = A - (K - (A + B));
	}

	cout << ans << endl;

	return 0;
}
