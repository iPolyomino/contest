#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >a(N + 1), boxes(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}

	vector < int >ans;
	for (int i = N; i > 0; i--) {
		int ii = i;
		int sum = 0;
		while (ii <= N) {
			sum += boxes[ii];
			ii += i;
		}
		if (sum % 2 != a[i]) {
			boxes[i] = 1;
			ans.push_back(i);
		}
	}

	cout << ans.size() << endl;
 for (auto i:ans) {
		cout << i << " ";
	}
	if (ans.size() != 0) {
		cout << "\n";
	}

	return 0;
}
