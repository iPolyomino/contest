#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;

	vector < int >L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	int ans = 1;

	vector < int >D(N + 1);
	D[0] = 0;
	for (int i = 1; i < N + 1; i++) {
		D[i] = D[i - 1] + L[i - 1];
		if (D[i] <= X) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
