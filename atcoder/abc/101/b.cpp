#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;
	cin >> N;

	ll nn = N;
	ll sn = 0;

	while (nn > 0) {
		sn += nn % 10;
		nn /= 10;
	}

	if (N % sn == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
