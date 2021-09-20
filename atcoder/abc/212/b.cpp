#include <bits/stdc++.h>

using namespace std;

int main()
{
	char X[5];

	for (int i = 0; i < 5; i++) {
		X[i] = 0;
	}

	cin >> X;

	bool same = true;
	bool step = true;
	for (int i = 0; i < 3; i++) {
		if (X[i] != X[i + 1]) same = false;
		if (((X[i] + 1) % 10) != (X[i + 1] % 10)) step = false;
	}
	if (same || step) cout << "Weak" << endl;
	else cout << "Strong" << endl;

	return 0;
}
