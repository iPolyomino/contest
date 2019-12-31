#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int n = 1;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (a[i] == n) {
			n++;
		} else {
			ans++;
		}
	}

	cout << (ans == N ? -1 : ans) << endl;

	return 0;
}
