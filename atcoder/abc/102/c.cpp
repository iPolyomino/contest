#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > B(N);
	for (int i = 0; i < N; i++) {
		B[i] = A[i] - (i + 1);
	}

	sort(B.begin(), B.end());

	ll center = B[N / 2];

	ll ans = 0;

	for (int i = 0; i < N; i++) {
		ans += abs(A[i] - (center + i + 1));
	}

	cout << ans << endl;
}
