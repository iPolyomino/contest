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

	int gcd = A[0];
	for (int i = 1; i < N; i++) {
		gcd = __gcd(gcd, A[i]);
	}

	cout << gcd << endl;

	return 0;
}
