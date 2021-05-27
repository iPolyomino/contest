#include <bits/stdc++.h>

using namespace std;

#define N 3

int main()
{
	int A[N];

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A, A + N);

	if ((A[2] - A[1]) == (A[1] - A[0])) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}

	return 0;
}
