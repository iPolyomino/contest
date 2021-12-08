#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector < pair < pair < string, int >, int > >sp(N);

	for (int i = 0; i < N; i++) {
		string s;
		int p;
		cin >> s >> p;
		sp[i] = make_pair(make_pair(s, -p), i);
	}
	sort(sp.begin(), sp.end());
	for (int i = 0; i < N; i++) {
		cout << sp[i].second + 1 << endl;
	}

	return 0;
}
