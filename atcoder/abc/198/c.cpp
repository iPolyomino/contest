#include <bits/stdc++.h>

using namespace std;

int main()
{
	double R, X, Y;

	cin >> R >> X >> Y;

	double dist = sqrt(pow(X, 2) + pow(Y, 2));

	double ans = dist / R;

	if (ans < 1.0) {
		ans = 2;
	}

	cout << ceil(ans) << endl;

	return 0;
}
