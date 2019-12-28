#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;
	cin >> S;

	int half = N / 2;

	if (N % 2 != 0) {
		cout << "No" << endl;
		return 0;
	}

	for (int i = 0; i < half; i++) {
		if (S[i] != S[i + half]) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
