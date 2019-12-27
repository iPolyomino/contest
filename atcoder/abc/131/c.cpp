#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B, C, D;
	cin >> A >> B >> C >> D;

	ll CDlcm = C * D / __gcd(C, D);

	ll bb = B / C + B / D - B / CDlcm;
	ll aa = (A - 1) / C + (A - 1) / D - (A - 1) / CDlcm;

	cout << B - A + 1 - (bb - aa) << endl;
	return 0;
}
