#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	ll current, ans;

	ans = 0;
	current = A[0];
	for (int i = 1; i < N; i++) {
		if (current > A[i]) {
			ans += current - A[i];
		}
		current = max(current, A[i]);
	}

	cout << ans << endl;
	return 0;
}
