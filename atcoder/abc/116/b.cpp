#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
	if (n % 2 == 0) {
		return n / 2;
	}
	return 3 * n + 1;
}

int main()
{
	int s;

	cin >> s;

	set < int >logset;

	int a = s;
	logset.insert(a);
	for (int i = 2; i < 1000010; i++) {
		a = f(a);
		if (logset.find(a) != logset.end()) {
			cout << i << endl;
			break;
		}
		logset.insert(a);
	}

	return 0;
}
