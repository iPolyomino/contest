#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	if (B == 0) {
		cout << "Gold" << endl;
	} else if (A == 0) {
		cout << "Silver" << endl;
	} else {
		cout << "Alloy" << endl;
	}

	return 0;
}
