#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;
	cin >> N;

	ll diff = abs(1 - N);
	ll x = 1;
	ll y = N;
	for (int i = 1; i <= N / i; i++) {
		int mod = N % i;
		if (mod == 0 && abs(N / i - i) < diff) {
			diff = abs(N / i - i);
			x = i;
			y = N / i;
		}
	}

	ll xDiff = max((ll) 0, x - 1);
	ll yDiff = max((ll) 0, y - 1);
	cout << xDiff + yDiff << endl;

	return 0;
}
