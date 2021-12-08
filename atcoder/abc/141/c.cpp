#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K, Q;

	cin >> N >> K >> Q;
	vector < int >A(Q);

	for (int i = 0; i < Q; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int cntIndex = 0;

	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		while (A[cntIndex] == i && cntIndex < Q) {
			cnt++;
			cntIndex++;
		}
		if (K - Q + cnt > 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}
