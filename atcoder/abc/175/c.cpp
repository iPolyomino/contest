#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll X, K, D;

	cin >> X >> K >> D;

	X = abs(X);

	ll move = min(X / D, K);
	K -= move;
	X -= D * move;

	if (K % 2 == 0) {
		cout << X << endl;
	} else {
		cout << D - X << endl;
	}

	return 0;
}
