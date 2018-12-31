#include <bits/stdc++.h>

using namespace std;

#define N 200

int main()
{
	int n;
	int two_e[N];

	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		two_e[i] = 0;
		while (input % 2 == 0) {
			two_e[i]++;
			input /= 2;
		}
	}
	int min = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (two_e[i] < min) {
			min = two_e[i];
		}
	}

	cout << min << endl;
	return 0;
}
