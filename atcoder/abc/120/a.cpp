#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int cnt = b / a;

	if (cnt < c) {
		cout << cnt << endl;
	} else {
		cout << c << endl;
	}

	return 0;
}
