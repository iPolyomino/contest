#include <bits/stdc++.h>

using namespace std;

int main()
{
	double V, T, S, D;
	cin >> V >> T >> S >> D;

	double time = D / V;

	if (T <= time && time <= S) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	return 0;
}
