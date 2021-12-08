#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<pair<int, int> > S;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			if (a == '#') {
				S.push_back(make_pair(j, i));
			}
		}
	}

	vector<pair<int, int> > T;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			if (a == '#') {
				T.push_back(make_pair(j, i));
			}
		}
	}

	if (S.size() != T.size()) {
		cout << "No" << endl;
		return 0;
	}

	sort(S.begin(), S.end());
	int count = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; (size_t)j < T.size(); j++) {
			int b = T[j].first, c = T[j].second;
			T[j].first = c * (-1);
			T[j].second = b;
		}
		sort(T.begin(), T.end());
		for (int j = 0; (size_t)j < S.size(); j++) {
			int s1 = S[j].first - S[0].first;
			int s2 = S[j].second - S[0].second;
			int t1 = T[j].first - T[0].first;
			int t2 = T[j].second - T[0].second;

			if (s1 != t1 || s2 != t2) {
				count++;
				break;
			}
		}
	}

	if (count == 4) {
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}


	return 0;
}
