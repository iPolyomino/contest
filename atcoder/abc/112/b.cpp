#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, T;

	cin >> N >> T;

	vector < pair < int, int > >v;
	for (int i = 0; i < N; i++) {
		int c, t;
		cin >> c >> t;
		v.push_back(make_pair(c, t));
	}

	sort(v.begin(), v.end());

	for (auto vc:v) {
		if (vc.second <= T) {
			cout << vc.first << endl;
			return 0;
		}
	}

	cout << "TLE" << endl;

	return 0;
}
