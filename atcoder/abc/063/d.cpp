#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll N, A, B;
vector < ll > h;

bool check(ll x)
{
	ll need = 0;
	for (ll i = 0; i < N; i++) {
		ll tmp = h[i] - B * x;
		if (tmp <= 0) {
			break;
		}
		need += (tmp + (A - B) - 1) / (A - B);
	}

	return need <= x;
}

int main()
{
	cin >> N >> A >> B;
	h = vector < ll > (N);
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	sort(h.begin(), h.end(), greater < int >());

	ll l = 0, r = pow(10, 9) + 1;

	while (r - l > 1) {
		ll m = (l + r) / 2;
		if (check(m)) {
			r = m;
		} else {
			l = m;
		}
	}

	cout << r << endl;

	return 0;
}
