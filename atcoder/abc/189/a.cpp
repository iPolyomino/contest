#include <bits/stdc++.h>

using namespace std;

int main()
{
	char C[3];

	for (int i = 0; i < 3; i++) {
		cin >> C[i];
	}
	if (C[0] == C[1] && C[1] == C[2]) {
		cout << "Won" << endl;
	} else {
		cout << "Lost" << endl;
	}
	return 0;
}
