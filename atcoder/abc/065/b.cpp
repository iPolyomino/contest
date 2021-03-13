#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int a[100010];
	// don't use a[0]
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int buttonIndex = 1;

	set < int >pushedButton;

	while (a[buttonIndex] != 2 && pushedButton.count(a[buttonIndex]) == 0) {
		pushedButton.insert(a[buttonIndex]);
		buttonIndex = a[buttonIndex];
	}

	if (a[buttonIndex] == 2) {
		cout << pushedButton.size() + 1 << endl;
	} else {
		cout << -1 << endl;
	}

	return 0;
}
