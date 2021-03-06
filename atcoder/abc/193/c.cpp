#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;
	cin >> N;

	unordered_set < ll > s;

	for (ll i = 2; i * i <= N; i++) {
		ll x = i * i;
		while (x <= N) {
			s.insert(x);
			x *= i;
		}
	}

	cout << N - s.size() << endl;

	return 0;
}
