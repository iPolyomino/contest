#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int area(int a, int b)
{
	return 4 * a * b + 3 * a + 3 * b;
}

int main()
{
	int N;

	cin >> N;
	vector<int> S(N);

	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	int mx = *max_element(S.begin(), S.end());

	set<int> ex;

	for (int i = 1; area(i, 1) <= mx; i++) {
		for (int j = 1; area(i, j) <= mx; j++) {
			ex.insert(area(i, j));
		}
	}

	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (find(ex.begin(), ex.end(), S[i]) == ex.end()) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
