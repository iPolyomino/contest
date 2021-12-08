#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	int ans = 0;

	for (int i = 1; i * i <= N; i++) {
		for (int j = i; i * j < N; j++) {
			ans++;
			if (i != j) {
				ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
