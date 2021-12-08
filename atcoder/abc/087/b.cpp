#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int x;

	cin >> x;

	int result = 0;

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				int sum = 500 * i + 100 * j + 50 * k;
				if (sum == x) {
					result++;
				}
			}
		}
	}

	cout << result << endl;
	return 0;
}
