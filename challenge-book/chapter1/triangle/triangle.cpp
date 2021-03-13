#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int a[110];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater < int >());

	for (int i = 0; i < n - 2; i++) {
		int j = i + 1;
		int k = i + 2;
		if (a[i] < a[j] + a[k]) {
			cout << a[i] + a[j] + a[k];
			return 0;
		}
	}

	cout << 0 << endl;
	return 0;
}
