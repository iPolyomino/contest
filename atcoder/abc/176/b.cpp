#include <bits/stdc++.h>

using namespace std;

int main()
{
	string N;

	cin >> N;

	int sum = 0;

	for (size_t i = 0; i < N.size(); i++) {
		sum += N[i] - '0';
		sum %= 9;
	}

	if (sum == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
