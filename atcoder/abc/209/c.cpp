#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define MOD 1000000007

int main()
{
	ll N;

	cin >> N;

	vector<int>C(N);
	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}

	sort(C.begin(), C.end());

	ll ans = 1;
	for (int i = 0; i < N; i++) {
		ans *= max(0, C[i] - i);
		ans %= MOD;
	}

	cout << ans << endl;

	return 0;
}
