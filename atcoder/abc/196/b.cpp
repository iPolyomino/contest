#include <bits/stdc++.h>

using namespace std;

int main()
{
	string X;

	cin >> X;

	size_t pos = X.find(".");

	if (pos == string::npos) {
		cout << X << endl;
		return 0;
	}

	cout << X.substr(0, pos) << endl;

	return 0;
}
