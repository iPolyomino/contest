#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
	ll N, W;

	cin >> N >> W;
	vector<pair<ll, ll> >AB(N);

	for (int i = 0; i < N; i++) {
		int A, B;
		cin >>  A >> B;
		AB[i] = make_pair(A, B);
	}

	sort(AB.begin(), AB.end(), greater<pair<ll, ll> >());

	ll ans = 0;
	ll used = 0;
	ll i = 0;

	while (used < W && i < N) {
		ll use = min( AB[i].second,  W - used );
		ans += AB[i].first * use;
		used += use;
		i++;
	}

	cout << ans << endl;

	return 0;
}
