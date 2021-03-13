#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int diff = b - a;
	int height = (1 + diff) * diff / 2;

	cout <<  height - b << endl;

	return 0;
}
