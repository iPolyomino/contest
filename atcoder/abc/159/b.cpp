#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int N = S.size();

	for (int i = 0; i < N / 2; i++) {
		if (S[i] != S[(N + 1) / 2 + i]) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
