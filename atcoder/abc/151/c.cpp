#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector < int >p(M);
	vector < string > S(M);
	for (int i = 0; i < M; i++) {
		cin >> p[i] >> S[i];
		p[i]--;
	}

	vector < int >isAC(N, 0);
	vector < int >WAcount(N, 0);

	for (int i = 0; i < M; i++) {
		if (isAC[p[i]] == 0) {
			if (S[i] == "AC") {
				isAC[p[i]] = 1;
			} else {
				WAcount[p[i]]++;
			}
		}
	}

	int correct = 0;
	int penalty = 0;
	for (int i = 0; i < N; i++) {
		if (isAC[i] == 1) {
			correct++;
			penalty += WAcount[i];
		}
	}

	cout << correct << " " << penalty << endl;

	return 0;
}
