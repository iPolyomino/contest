#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());
	A.erase(unique(A.begin(), A.end()), A.end());
	if (A.size() == (size_t)N) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
