#include <bits/stdc++.h>

using namespace std;

#define MAX_N 21
#define MAX_M 21

int main()
{
	int N, M, C;
	int B[MAX_M];
	int A[MAX_N][MAX_M];

	cin >> N >> M >> C;

	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++) {
			sum += A[i][j] * B[j];
		}
		sum += C;

		if (sum > 0) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
