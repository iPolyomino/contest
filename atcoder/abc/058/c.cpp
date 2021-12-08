#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;
	vector < string > S(n);

	for (int i = 0; i < n; i++) {
		cin >> S[i];
	}

	vector < vector < int > >cnt(26, vector < int >(n));

	for (int i = 0; i < n; i++) {
		for (size_t j = 0; j < S[i].size(); j++) {
			cnt[S[i][j] - 'a'][i]++;
		}
	}

	int ans[26];

	for (int i = 0; i < 26; i++) {
		ans[i] = INT_MAX;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < n; j++) {
			ans[i] = min(ans[i], cnt[i][j]);
		}
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < ans[i]; j++) {
			char s = 'a' + i;
			cout << s;
		}
	}

	cout << "\n";
	return 0;
}
