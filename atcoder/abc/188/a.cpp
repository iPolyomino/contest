#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X, Y;
	cin >> X >> Y;

	if (min(X, Y) + 3 > max(X, Y)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
