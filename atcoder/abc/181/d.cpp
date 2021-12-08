#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	vector < int >num;

	for (size_t i = 0; i < S.size(); i++) {
		int n = S[i] - '0';
		int cnt = 0;
		for (size_t j = 0; j < num.size(); j++) {
			if (num[j] == n) {
				cnt++;
			}
		}
		if (cnt > 3) {
			continue;
		}
		num.push_back(n);
	}

	if (num.size() == 1) {
		if (num[0] % 8 == 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
		return 0;
	}
	if (num.size() == 2) {
		if ((num[0] * 10 + num[1]) % 8 == 0
		    || (num[1] * 10 + num[0]) % 8 == 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
		return 0;
	}

	for (size_t i = 0; i < num.size() - 2; i++) {
		for (size_t j = i + 1; j < num.size() - 1; j++) {
			for (size_t k = j + 1; k < num.size(); k++) {
				if ((num[i] * 100 + num[j] * 10 + num[k]) % 8 ==
				    0
				    || (num[i] * 100 + num[k] * 10 +
					num[j]) % 8 == 0
				    || (num[j] * 100 + num[i] * 10 +
					num[k]) % 8 == 0
				    || (num[j] * 100 + num[k] * 10 +
					num[i]) % 8 == 0
				    || (num[k] * 100 + num[i] * 10 +
					num[j]) % 8 == 0
				    || (num[k] * 100 + num[j] * 10 +
					num[i]) % 8 == 0) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
