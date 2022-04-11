#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X, Y;

	cin >> X >> Y;
	cout << (int)max( ceil((double)(Y - X) / 10.0), 0.0) << endl;
	return 0;
}
