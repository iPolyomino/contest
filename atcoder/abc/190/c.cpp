#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<pair<int, int> > cond(M);

	for (int i = 0; i < M; i++) {
		cin >> cond[i].first >> cond[i].second;
	}

	int K;

	cin >> K;
	vector<pair<int, int> > choice(K);

	for (int i = 0; i < K; i++) {
		cin >> choice[i].first >> choice[i].second;
	}

	int ans = 0;

	for (int bit = 0; bit < 1 << K; bit++) {
		vector<bool> ball(N);
		for (int i = 0; i < K; i++) {
			int C = choice[i].first;
			int D = choice[i].second;
			ball[bit & 1 << i ? C : D] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < M; i++) {
			if (ball[cond[i].first] && ball[cond[i].second]) cnt++;
		}
		if (ans < cnt) ans = cnt;
	}
	cout << ans << endl;

	return 0;
}
