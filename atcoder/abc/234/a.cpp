#include <bits/stdc++.h>

using namespace std;

int f(int x)
{
	return pow(x, 2) + 2 * x + 3;
}

int main()
{
	int t;

	cin >> t;
	cout << f(f(f(t) + t) + f(f(t))) << endl;

	return 0;
}
