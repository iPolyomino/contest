#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S[3];

	for (int i = 0; i < 3; i++) {
		cin >> S[i];
	}
	string T;
	cin >> T;

	for (size_t i = 0; i < T.size(); i++) {
		cout << S[T[i] - '0' - 1];
	}
	cout << "\n";
	return 0;
}
