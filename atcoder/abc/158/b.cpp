#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, A, B;

	cin >> N >> A >> B;
	ll div = N / (A + B);
	ll mod = N % (A + B);

	ll ans = div * A + min(A, mod);

	cout << ans << endl;

	return 0;
}
