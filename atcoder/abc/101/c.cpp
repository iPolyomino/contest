#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	if (K > N) {
		cout << 1 << endl;
		return 0;
	}

	int ans = ceil((double)(N - 1) / (double)(K - 1));

	cout << ans << endl;

	return 0;
}
