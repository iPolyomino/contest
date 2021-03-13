#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector < int >A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	vector < pair < int, int > >AB(N);
	for (int i = 0; i < N; i++) {
		AB[i] = make_pair(A[i], B[i]);
	}
	sort(AB.begin(), AB.end());

	long long ans = 0;
	for (int i = 0; i < N; i++) {
		int buy = min(AB[i].second, M);

		ans += (long long)AB[i].first * buy;
		M -= buy;
	}

	cout << ans << endl;

	return 0;
}
