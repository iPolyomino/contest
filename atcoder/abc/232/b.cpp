#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;

	vector<int> diff(S.size());

	for (size_t i = 0; i < S.size(); i++) {
		diff[i] = (T[i] - S[i] + 26) % 26;
	}

	for (size_t i = 1; i < S.size(); i++) {
		if (diff [i - 1] != diff [i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
