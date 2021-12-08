#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	string SS = S + S;

	string minS = S;
	string maxS = S;

	for (size_t i = 0; i < S.size(); i++) {
		string comp = SS.substr(i, S.size());
		if (comp < minS) {
			minS = comp;
		}
		if (comp > maxS) {
			maxS = comp;
		}
	}

	cout << minS << endl;
	cout << maxS << endl;

	return 0;
}
