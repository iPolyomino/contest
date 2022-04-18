#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector<ll> H(N);

	for (ll i = 0 ; i < N; i++) {
		cin >> H[i];
	}

	ll index = 0;

	while (index + 1 < N && H[index] < H[index + 1]) {
		index++;
	}

	cout << H[index] << endl;

	return 0;
}
