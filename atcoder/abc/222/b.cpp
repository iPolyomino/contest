#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, P;

	cin >> N >> P;
	vector<int> a(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (a[i] < P) ans++;
	}

	cout << ans << endl;


	return 0;
}
