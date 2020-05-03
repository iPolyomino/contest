#include <bits/stdc++.h>

using namespace std;

#define MAX_N 10000

int N, R;
int X[MAX_N];

int main()
{

	cin >> N >> R;
	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}

	sort(X, X + N);

	int i = 0, ans = 0;
	while (i < N) {
		int s = X[i++];
		while (i < N && X[i] <= s + R) {
			i++;
		}

		int p = X[i - 1];
		while (i < N && X[i] <= p + R) {
			i++;
		}
		ans++;
	}

	cout << ans << endl;

	return 0;
}
