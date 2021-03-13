#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A, B, C, D;

	cin >> A >> B >> C >> D;
	if (ceil(A / D) >= ceil(C / B)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
