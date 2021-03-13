#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, N;

	cin >> H >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int sum = accumulate(A.begin(), A.end(), 0);

	cout << (H <= sum ? "Yes" : "No") << endl;
	return 0;
}
