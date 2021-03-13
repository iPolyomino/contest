#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >W(N);
	for (int i = 0; i < N; i++) {
		cin >> W[i];
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += W[i];
	}
	int ans = sum;
	int a = 0;

	for (int i = 0; i < N; i++) {
		a += W[i];
		int diff = abs((sum - a) - a);
		if (diff < ans) {
			ans = diff;
		}
	}

	cout << ans << endl;

	return 0;
}
