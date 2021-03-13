#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;
	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	cout << A[N - 1] - A[0] << endl;

	return 0;
}
