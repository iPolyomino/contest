#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, M;

	cin >> N >> M;
	vector < int >H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}
	vector < int >A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A[i] >> B[i];
		A[i]--;
		B[i]--;
	}

	vector < set < int > >connect(N);
	for (int i = 0; i < M; i++) {
		connect[A[i]].insert(B[i]);
		connect[B[i]].insert(A[i]);
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int highest = 0;
		for (auto c:   connect[i]) {
			highest = max(highest, H[c]);
		}
		if (highest < H[i]) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
