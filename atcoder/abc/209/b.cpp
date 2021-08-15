#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;
	vector<int>A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}


	int total = accumulate(A.begin(), A.end(), 0);

	total -= N / 2;

	if (total <= X) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
