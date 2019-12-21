#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	if (A <= 9 && B <= 9) {
		cout << A * B << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
