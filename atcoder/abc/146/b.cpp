#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	string S;
	cin >> S;

	string ans = S;

	for (int i = 0; (size_t)i < S.size(); i++) {
		ans[i] += N;
		if (ans[i] > 'Z') {
			ans[i] -= ('Z' - 'A' + 1);
		}
	}

	cout << ans << endl;

	return 0;
}
