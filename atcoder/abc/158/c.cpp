#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A, B;

	cin >> A >> B;
	double aa = ceil(A / 0.08);
	double bb = ceil(B / 0.1);
	int ans = max(aa, bb);

	if (floor((double)ans * 0.08) == A && floor((double)ans * 0.1) == B) {
		cout << ans << endl;
	} else {
		cout << -1 << endl;
	}

	return 0;
}
