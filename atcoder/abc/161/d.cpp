#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll K;

	cin >> K;

	queue < ll > que;

	for (int i = 1; i <= 9; i++) {
		que.push(i);
	}

	ll index = 0;
	ll nb = 0;

	while (index < K) {
		index++;
		nb = que.front();
		que.pop();
		ll mod10 = nb % 10;
		if (mod10 != 0) {
			que.push(10 * nb + mod10 - 1);
		}
		que.push(10 * nb + mod10);
		if (mod10 != 9) {
			que.push(10 * nb + mod10 + 1);
		}
	}

	cout << nb << endl;

	return 0;
}
