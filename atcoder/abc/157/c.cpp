#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector < pair < int, int > >sc(M);
	for (int i = 0; i < M; i++) {
		int s, c;
		cin >> s >> c;
		s--;
		sc[i] = make_pair(s, c);
	}
	sort(sc.begin(), sc.end());

	vector < int >ans(N, 0);

	bool isFirstCaracterSpecified = false;
	for (int i = 0; i < M; i++) {
		if (i > 0) {
			if (sc[i - 1].first == sc[i].first
			    && sc[i - 1].second != sc[i].second) {
				cout << -1 << endl;
				return 0;
			}
		}
		if (sc[i].first == 0) {
			isFirstCaracterSpecified = true;
		}
		ans[sc[i].first] = sc[i].second;
	}

	if (!isFirstCaracterSpecified && N > 1) {
		ans[0] = 1;
	}

	if (ans[0] == 0 && N > 1) {
		cout << -1 << endl;
		return 0;
	}

	for (int i = 0; i < N; i++) {
		cout << ans[i];
	}
	cout << "\n";

	return 0;
}
