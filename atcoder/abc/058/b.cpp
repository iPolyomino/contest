#include <bits/stdc++.h>

using namespace std;

int main()
{
	string O, E;

	cin >> O >> E;

	for (size_t i = 0; i < E.size(); i++) {
		cout << O[i] << E[i];
	}

	if (E.size() < O.size()) {
		cout << O[O.size() - 1];
	}

	cout << "\n";
	return 0;
}
