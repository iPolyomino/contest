#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll X;
	cin >> X;
	for (ll i = -120; i < 120; i++) {
		for (ll j = -120; j < 120; j++) {
			if (X == pow(i, 5) - pow(j, 5)) {
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	return 0;
}
