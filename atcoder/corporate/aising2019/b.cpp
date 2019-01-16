#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;

	int x, y, z;
	x = y = z = 0;

	int p[110];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (p[i] <= a) {
			x++;
		} else if (p[i] <= b) {
			y++;
		} else {
			z++;
		}
	}

	cout << min(min(x, y), z) << endl;

	return 0;
}
