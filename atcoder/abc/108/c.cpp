#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;
	cin >> N >> K;

	ll nk = N / K;
	if (K % 2 == 1) {
		cout << nk * nk * nk << endl;
		return 0;
	}

	if (N % K >= K / 2) {
		ll nk1 = nk + 1;
		cout << nk * nk * nk + nk1 * nk1 * nk1 << endl;
	} else {
		cout << nk * nk * nk * 2 << endl;
	}

	return 0;
}
