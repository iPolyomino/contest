#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N);
	vector < vector < pair < int, int > > >xy;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		vector < pair < int, int > >testimony;
		for (int j = 0; j < A[i]; j++) {
			int x, y;
			cin >> x >> y;
			testimony.push_back(make_pair(x, y));
		}
		xy.push_back(testimony);
	}

	int ans = 0;
	for (int bits = 1; bits < (1 << N); bits++) {
		bool isOK = true;
		int honest = 0;
		for (int i = 0; i < N; i++) {
			if (((bits >> i) & 1) == 0) {
				continue;
			}
			honest++;
			for (int j = 0; j < A[i]; j++) {
				if (((bits >> (xy[i][j].first - 1)) & 1) ^
				    xy[i][j].second) {
					isOK = false;
				}
			}
		}
		if (isOK) {
			ans = max(ans, honest);
		}
	}

	cout << ans << endl;
	return 0;
}
