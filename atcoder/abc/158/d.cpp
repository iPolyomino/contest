#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	int Q;

	cin >> Q;

	bool isReverse = false;

	for (int i = 0; i < Q; i++) {
		int T;
		cin >> T;
		if (T == 1) {
			isReverse = !isReverse;
			continue;
		}
		int F;
		string C;
		cin >> F >> C;

		// xor
		if ((F == 1) == !isReverse) {
			S.insert(0, C);
		} else {
			S.append(C);
		}
	}

	if (isReverse) {
		reverse(S.begin(), S.end());
	}

	cout << S << endl;

	return 0;
}
