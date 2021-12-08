#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S, T;

	cin >> S >> T;

	int ans = 0;

	for (int a = 0; a <= S; a++) {
		for (int b = 0; a + b <= S; b++) {
			for (int c = 0; a + b + c <= S; c++) {
				if (a * b * c <= T) ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
