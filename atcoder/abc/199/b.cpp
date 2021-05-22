#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int>A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	int mx = *max_element(A.begin(), A.end());
	int mn = *min_element(B.begin(), B.end());

	int ans = mn - mx + 1;
	if (ans < 0) {
		ans = 0;
	}

	cout << ans  << endl;

	return 0;
}
