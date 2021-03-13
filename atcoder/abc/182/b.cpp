#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int cnt = 0;
	int ans = 0;

	for (int d = 2; d <= 1000; d++) {
		int c = 0;
		for (int i = 0; i < N; i++) {
			if (A[i] % d == 0) {
				c++;
			}
		}
		if (cnt < c) {
			cnt = c;
			ans = d;
		}
	}

	cout << ans << endl;
	return 0;
}
