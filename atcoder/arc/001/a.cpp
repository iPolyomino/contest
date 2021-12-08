#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	string S;

	cin >> S;

	int maxCount = INT_MIN;
	int minCount = INT_MAX;

	for (int i = 0; i < 4; i++) {
		int cnt = count(S.begin(), S.end(), (char)('1' + i));
		maxCount = max(maxCount, cnt);
		minCount = min(minCount, cnt);
	}

	cout << maxCount << " " << minCount << endl;

	return 0;
}
