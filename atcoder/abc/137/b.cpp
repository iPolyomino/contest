#include <bits/stdc++.h>

using namespace std;

int main()
{
	int K, X;

	cin >> K >> X;

	int start = X - K + 1;
	int end = X + K - 1;

	for (int i = start; i <= end; i++) {
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
