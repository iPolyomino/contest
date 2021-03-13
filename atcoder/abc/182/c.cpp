#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	string N;

	cin >> N;
	vector < int >digits;

	int sum = 0;
	int mod[] = { 0, 0, 0 };
	for (size_t i = 0; i < N.size(); i++) {
		digits.push_back(N[i] - '0');
		sum += digits[i];
		mod[digits[i] % 3]++;
	}

	if (sum % 3 == 0) {
		cout << 0 << endl;
	} else if (sum % 3 == 1) {
		if (mod[1] >= 1 && N.size() > 1) {
			cout << 1 << endl;
		} else if (mod[2] >= 2 && N.size() > 2) {
			cout << 2 << endl;
		} else {
			cout << -1 << endl;
		}
	} else {
		if (mod[2] >= 1 && N.size() > 1) {
			cout << 1 << endl;
		} else if (mod[1] >= 2 && N.size() > 2) {
			cout << 2 << endl;
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}
