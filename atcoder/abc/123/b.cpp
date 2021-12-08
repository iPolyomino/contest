#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector < int >M(5);

	for (int i = 0; i < 5; i++) {
		cin >> M[i];
	}

	int ans = 0;
	int s = 0;

	for (int i = 0; i < 5; i++) {
		ans += M[i];
		if (M[i] % 10 != 0) {
			int t = 10 - M[i] % 10;
			ans += t;
			if (s < t) {
				s = t;
			}
		}
	}

	cout << ans - s << endl;
	return 0;
}
