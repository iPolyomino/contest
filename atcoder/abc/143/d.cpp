#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}
	sort(L.begin(), L.end());

	int ans = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (L[i] + L[j] > L[k]) {
					ans++;
				} else {
					break;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}
