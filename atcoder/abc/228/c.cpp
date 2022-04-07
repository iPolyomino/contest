#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	K--;
	vector<int> P(N);

	for (int i = 0 ; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			int score;
			cin >> score;
			P[i] += score;
		}
	}

	vector<int> sortP(P);

	sort(sortP.begin(), sortP.end(), greater<int>());

	for (int x : P) {
		if (x + 300 >= sortP[K]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}
