#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, A, B;

	cin >> N >> A >> B;

	ll P, Q, R, S;

	cin >> P >> Q >> R >> S;

	vector <string>ans;
	string str = "";

	for (ll i = 0  ; i  < (S - R + 1); i++) {
		str += ".";
	}
	for (ll i = 0 ; i < (Q - P + 1); i++) {
		ans.push_back(str);
	}

	ll x, y;

	x = max(P - A, R - B);
	y = min(Q - A, S - B);
	for (ll i = x; i <= y; i++) {
		ans[A + i - P][B + i - R] = '#';
	}
	x = max(P - A, B - S);
	y = min(Q - A, B - R);
	for (ll i = x; i <= y; i++) {
		ans[A + i - P][B - i - R] = '#';
	}

	for (ll i = 0; i < (Q - P + 1); i++) {
		cout << ans[i] << endl;
	}

	return 0;
}
