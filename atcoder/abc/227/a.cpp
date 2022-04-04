#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K, A;

	cin >> N >> K >> A;

	int ans = (A + K - 1) % N;

	if (ans == 0) {
		cout << N << endl;
	} else {
		cout << (A + K - 1) % N  << endl;
	}

	return 0;
}
