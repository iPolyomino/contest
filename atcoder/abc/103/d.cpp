#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector < pair < int, int >>ab(M);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		ab[i] = make_pair(a, b);
	}

	sort(ab.begin(), ab.end(), greater < pair < int, int >>());

	int last, ans;
	last = -1;
	ans = 0;

	for (int i = 0; i < M; i++) {
		if (ab[i].first <= last && last < ab[i].second) {
			continue;
		}
		ans++;
		last = ab[i].first;
	}

	cout << ans << endl;

	return 0;
}
