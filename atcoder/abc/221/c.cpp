#include <bits/stdc++.h>

using namespace std;

int main()
{
	string N;

	cin >> N;
	sort(N.begin(), N.end());

	int ans = INT_MIN;

	do {
		for (size_t i = 1; i < N.size(); i++) {
			string a = "";
			string b = "";
			for (size_t j = 0; j < i; j++) {
				a += N[j];
			}
			for (size_t j = i; j < N.size(); j++) {
				b += N[j];
			}
			if (a[0] == '0' || b[0] == '0') continue;
			ans = max(ans, stoi(a) * stoi(b));
		}
	} while (next_permutation(N.begin(), N.end()));

	cout << ans << endl;

	return 0;
}
