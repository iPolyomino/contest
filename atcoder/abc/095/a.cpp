#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int price = 700;
	for (int i = 0; i < 3; i++) {
		if (S[i] == 'o') {
			price += 100;
		}
	}

	cout << price << endl;

	return 0;
}
