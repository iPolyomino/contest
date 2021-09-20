#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	if (N < 126) {
		cout << 4 << endl;
	} else if (N < 212) {
		cout << 6 << endl;
	} else {
		cout << 8 << endl;
	}
	return 0;
}
