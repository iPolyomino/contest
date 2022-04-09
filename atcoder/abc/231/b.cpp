#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<string> S(N);

	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	map<string, int> result;

	for (int i = 0; i < N; i++) {
		result[S[i]]++;
	}

	string ans = "";

	for (auto item : result) {
		if (result[ans] < item.second) {
			ans = item.first;
		}
	}

	cout << ans << endl;

	return 0;
}
