#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < 3; i++) {
		if (N % 10 == 7) {
			cout << "Yes" << endl;
			return 0;
		}
		N /= 10;
	}
	cout << "No" << endl;
	return 0;
}
