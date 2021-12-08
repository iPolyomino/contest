#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	string c;

	cin >> c;

	int cR = 0, cW = 0;

	for (int j = 0; j < N; j++) {
		if (c[j] == 'R') {
			cR++;
		} else {
			cW++;
		}
	}

	string target = string(cR, 'R') + string(cW, 'W');

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (c[i] != target[i]) {
			ans++;
		}
	}

	cout << ans / 2 << endl;

	return 0;
}
