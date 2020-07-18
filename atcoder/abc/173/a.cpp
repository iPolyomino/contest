#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N % 1000 == 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << 1000 - (N % 1000) << endl;
	return 0;
}
