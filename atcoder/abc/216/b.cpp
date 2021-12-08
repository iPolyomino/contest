#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<pair<string, string> > ST(N);

	for (int i = 0; i < N; i++) {
		cin >> ST[i].first >> ST[i].second;
	}

	sort(ST.begin(), ST.end());

	for (int i = 0; i < N - 1; i++) {
		if (ST[i].first == ST[i + 1].first && ST[i].second == ST[i + 1].second) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}
