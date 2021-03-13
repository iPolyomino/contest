#include <bits/stdc++.h>

using namespace std;

#define MAX_N 110

const int MOD = 1e9 + 7;

int dp[MAX_N][4][4][4];

int main()
{
	int N;

	cin >> N;

	// A -> 0
	// G -> 1
	// C -> 2
	// T -> 3

	dp[0][3][3][3] = 1;

	// 文字列の文字数
	for (int len = 0; len < N; len++) {
		// 最後から1文字目の文字
		for (int i = 0; i < 4; i++) {
			// 最後から2文字目の文字
			for (int j = 0; j < 4; j++) {
				// 最後から3文字目の文字
				for (int k = 0; k < 4; k++) {
					// 条件に当てはまるものがない
					if (dp[len][i][j][k] == 0)
						continue;

					for (int a = 0; a < 4; a++) {
						if (a == 2 && i == 1 && j == 0)
							continue;
						if (a == 2 && i == 0 && j == 1)
							continue;
						if (a == 1 && i == 2 && j == 0)
							continue;
						if (a == 2 && i == 1 && k == 0)
							continue;
						if (a == 2 && j == 1 && k == 0)
							continue;

						dp[len + 1][a][i][j] +=
							dp[len][i][j][k];
						dp[len + 1][a][i][j] %= MOD;
					}
				}
			}
		}
	}

	int ans = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				ans += dp[N][i][j][k];
				ans %= MOD;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
