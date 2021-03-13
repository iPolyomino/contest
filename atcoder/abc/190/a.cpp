#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	if (A <= B - C) {
		cout << "Aoki" << endl;
	} else {
		cout << "Takahashi" << endl;
	}

	return 0;
}
