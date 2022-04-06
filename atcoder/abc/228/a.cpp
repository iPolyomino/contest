#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S, T, X;

	cin >> S >> T >> X;
	if (T < S) {
		T += 24;
	}
	if (X < S) {
		X += 24;
	}
	if (S <= X && X < T) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
