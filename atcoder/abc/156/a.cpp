#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, R;

	cin >> N >> R;
	if (N >= 10) {
		cout << R << endl;
		return 0;
	}
	cout << R + 100 * (10 - N) << endl;
	return 0;
}
