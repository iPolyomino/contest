#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;

	cin >> a >> b;

	int n = atoi((a + b).c_str());

	int i = 1;

	while (i * i < n) {
		i++;
	}
	if (i * i == n) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
