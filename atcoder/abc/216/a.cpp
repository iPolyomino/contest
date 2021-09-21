#include <bits/stdc++.h>

using namespace std;

int main()
{
	double XY;
	float x, y;

	cin >> XY;
	y = modff(XY, &x);

	if (y * 10 <= 2) {
		cout << (int)x << "-" << endl;
	} else if (y * 10 <= 6) {
		cout << (int)x << endl;
	} else {
		cout << (int)x << "+" << endl;
	}

	return 0;
}
