#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B, C;

	cin >> A >> B >> C;

	if (C % 2 == 0) {
		A *= A;
		B *= B;
	}

	if (A < B) {
		cout <<  "<" << endl;
	} else if (A == B) {
		cout << "=" << endl;
	} else {
		cout << ">" << endl;
	}

	return 0;
}
