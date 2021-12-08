#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > A(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	ll sum = 0;
	ll mx = 0;
	ll ans = 0;
	ll now = 0;

	for (int i = 1; i <= N; i++) {
		sum += A[i];
		mx = max(mx, sum);
		ans = max(ans, now + mx);
		now += sum;
		ans = max(ans, now);
	}

	cout << ans << endl;

	return 0;
}
