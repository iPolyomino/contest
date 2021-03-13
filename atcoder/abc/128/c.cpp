#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector < int >k(M);
	vector < vector < int > >s(M);
	for (int i = 0; i < M; i++) {
		cin >> k[i];
		s[i] = vector < int >(k[i]);
		for (int j = 0; j < k[i]; j++) {
			cin >> s[i][j];
			s[i][j]--;
		}
	}

	vector < int >p(M);
	for (int i = 0; i < M; i++) {
		cin >> p[i];
	}

	int ans = 0;
	for (int bits = 0; bits < (1 << N); bits++) {
		bool isOk = true;
		for (int i = 0; i < M; i++) {
			int onCount = 0;
			for (int j = 0; j < k[i]; j++) {
				bool isOn = (bits >> s[i][j]) & 1;
				if (isOn) {
					onCount++;
				}
			}
			if (onCount % 2 != p[i]) {
				isOk = false;
			}
		}
		if (isOk) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
