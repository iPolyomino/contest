#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	ll mod200[200] = {};

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		ans += mod200[A[i] % 200];
		mod200[A[i] % 200]++;
	}


	cout << ans << endl;

	return 0;
}
