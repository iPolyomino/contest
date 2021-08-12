#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	if (A <= B && B <= A * 6 ) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
