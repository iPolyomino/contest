#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int K, N;
	cin >> K >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > dist(N);
	for (int i = 0; i < N - 1; i++) {
		dist[i] = A[i + 1] - A[i];
	}

	dist[N - 1] = K - A[N - 1] + A[0];

	sort(dist.begin(), dist.end());
	dist.pop_back();

	ll sum = accumulate(dist.begin(), dist.end(), 0LL);

	cout << sum << endl;

	return 0;
}
