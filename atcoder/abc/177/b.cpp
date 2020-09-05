#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S, T;
	cin >> S;
	cin >> T;

	int changeMin = INT_MAX;
	for (size_t i = 0; i <= S.size() - T.size(); i++) {
		int change = 0;
		for (size_t j = 0; j < T.size(); j++) {
			if (S[i + j] != T[j]) {
				change++;
			}
		}
		changeMin = min(change, changeMin);
	}
	cout << changeMin << endl;
	return 0;
}
