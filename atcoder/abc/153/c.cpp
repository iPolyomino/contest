#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;

	cin >> N >> K;
	vector < ll > H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}
	sort(H.begin(), H.end());
	ll ans = 0;
	for (int i = 0; i < N - K; i++) {
		ans += H[i];
	}

	cout << ans << endl;
	return 0;
}
