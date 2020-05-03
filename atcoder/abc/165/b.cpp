#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll X;
	cin >> X;

	ll year = 0;
	ll currnet = 100;
	while (currnet < X) {
		currnet *= 1.01;
		year++;
	}

	cout << year << endl;

	return 0;
}
