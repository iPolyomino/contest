#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;
	X--;
	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		A[i]--;
	}

	set<int> already;

	while (already.find(X) == already.end()) {
		already.insert(X);
		X = A[X];
	}

	cout << already.size() << endl;

	return 0;
}
