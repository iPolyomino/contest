#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d;
	cin >> d;

	cout << "Christmas";
	int diff = 25 - d;

	for (int i = 0; i < diff; i++) {
		cout << " Eve";
	}
	cout << "\n";
	return 0;
}
