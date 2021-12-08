#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;
	int A, B;

	cin >> A >> B;
	string U;

	cin >> U;
	if (S == U) {
		A--;
	} else {
		B--;
	}
	cout << A << " " << B << endl;
	return 0;
}
