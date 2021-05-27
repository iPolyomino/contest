#include <bits/stdc++.h>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
	return a.second > b.second;
}

int main()
{
	int N;

	cin >> N;

	vector<pair<string, int> > ST(N);
	for (int i = 0; i < N; i++) {
		cin >> ST[i].first >> ST[i].second;
	}

	sort(ST.begin(), ST.end(), compare);

	cout << ST[1].first << endl;

	return 0;
}
