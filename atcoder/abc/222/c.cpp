#include <bits/stdc++.h>

using namespace std;

vector<string> A;

int judge(int round, int userA, int userB)
{
	char a = A[userA][round];
	char b = A[userB][round];

	if (a == b)
		return -1;

	if (a == 'G' && b == 'C')
		return userA;
	if (a == 'C' && b == 'P')
		return userA;
	if (a == 'P' && b == 'G')
		return userA;

	return userB;
}

bool compare(pair<int, int> A, pair<int, int> B)
{
	if (A.second == B.second) {
		// index
		return A.first < B.first;
	}
	// wins
	return A.second > B.second;
}

int main()
{
	int N, M;

	cin >> N >> M;
	A.resize(2 * N);
	for (int i = 0; i < 2 * N; i++) {
		cin >> A[i];
	}

	// index, win
	vector<pair<int, int> > win(2 * N);
	for (int i = 0; i < 2 * N; i++) {
		win[i] = make_pair(i, 0);
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			int result = judge(i, win[j * 2].first, win[j * 2 + 1].first);
			if (result == win[j * 2].first) {
				win[j * 2].second++;
			} else if (result == win[j * 2 + 1].first) {
				win[j * 2 + 1].second++;
			}
		}
		sort(win.begin(), win.end(), compare);
	}

	for (int k = 0; k < 2 * N; k++) {
		cout << win[k].first + 1 << endl;
	}

	return 0;
}
