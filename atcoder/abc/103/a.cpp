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

	int ans = 0;
	for (int i = 0; i < N - 1; i++) {
		ans += A[i + 1] - A[i];
	}

	cout << ans << endl;

	return 0;
}
