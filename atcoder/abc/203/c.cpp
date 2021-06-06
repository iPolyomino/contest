#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;

	cin >> N >> K;

	vector<pair<ll, ll> >AB(N);
	for (int i = 0; i < N; i++) {
		cin >> AB[i].first >> AB[i].second;
	}

	sort(AB.begin(), AB.end());

	ll money = K;

	int i = 0;
	while ( i < N && AB[i].first <= money ) {
		money += AB[i].second;
		i++;
	}

	cout << money << endl;

	return 0;
}
