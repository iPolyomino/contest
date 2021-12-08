#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int p[10010];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n, greater < int >());
	p[0] /= 2;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << sum << endl;
	return 0;
}
