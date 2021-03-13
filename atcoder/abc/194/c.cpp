#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	map < int, int >cnt;
	for (int i = 0; i < N; i++) {
		cnt[A[i]]++;
	}

	ll ans = 0;
	for (auto & i:cnt) {
		for (auto & j:cnt) {
			ans += pow(i.first - j.first, 2) * i.second * j.second;
		}
	}

	cout << ans / 2 << endl;

	return 0;
}
