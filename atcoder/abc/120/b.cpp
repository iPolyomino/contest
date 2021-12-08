#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, k;

	cin >> a >> b >> k;

	int cnt = 0;

	for (int i = 100; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			cnt++;
			if (cnt == k) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}
