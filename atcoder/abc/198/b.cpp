#include <bits/stdc++.h>

using namespace std;

int main()
{
	string N;

	cin >> N;

	// remove zero
	while (N[N.size() - 1] == '0') {
		N.pop_back();
	}

	for (size_t i = 0; i < N.size() / 2; i++) {
		if (N[i] != N[N.size() - i - 1]) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
