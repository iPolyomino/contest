#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector < string > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	vector < string > B(M);
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < N - M + 1; i++) {
		for (int j = 0; j < N - M + 1; j++) {
			bool isOK = true;
			for (int x = 0; x < M; x++) {
				for (int y = 0; y < M; y++) {
					if (A[j + y][i + x] != B[y][x]) {
						isOK = false;
					}
				}
			}
			if (isOK) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
