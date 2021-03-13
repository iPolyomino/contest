#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	string S;

	cin >> S;

	ll K;
	cin >> K;

	for (int i = 0; i < min(K, (ll)S.size()); i++) {
		if (S[i] != '1') {
			cout << S[i] << endl;
			return 0;
		}
	}

	cout << 1 << endl;
	return 0;
}
