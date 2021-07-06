#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C, D;

	cin >> A >> B >> C >> D;

	if (B >= C * D) {
		cout << -1 << endl;
		return 0;
	}

	cout << (A - 1) / (C * D - B) + 1 << endl;

	return 0;
}
