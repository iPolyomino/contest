#include <bits/stdc++.h>

using namespace std;

int main()
{
	string N;
	cin >> N;
	int K;
	cin >> K;

	string ans = N;

	for (int i = 0; i < K; i++) {
		string g1 = ans, g2 = ans;

		sort(g1.begin(), g1.end(), greater < char >());
		sort(g2.begin(), g2.end());

		ans = to_string(stoi(g1) - stoi(g2));
	}

	cout << ans << endl;

	return 0;
}
