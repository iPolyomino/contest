#include <bits/stdc++.h>

using namespace std;

int main()
{
	int K;

	cin >> K;
	string S;

	cin >> S;

	for (size_t i = 0; i < min((size_t)K, S.size()); i++) {
		cout << S[i];
	}

	if (S.size() > (size_t)K) {
		cout << "...";
	}

	cout << "\n";

	return 0;
}
