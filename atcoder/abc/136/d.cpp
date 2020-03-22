#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	vector < int >ans(S.size(), 0);

	int index = 0;
	while ((size_t)index < S.size()) {
		int head = index;
		int LEnd = 0;
		int REnd = 0;
		while (S[index] == 'R') {
			if ((index - head) % 2 == 0) {
				LEnd++;
			} else {
				REnd++;
			}
			index++;
		}
		if ((index - head) % 2 != 0) {
			swap(LEnd, REnd);
		}
		ans[index - 1] += REnd;
		ans[index] += LEnd;

		head = index;
		LEnd = 0;
		REnd = 0;
		while ((size_t)index < S.size() && S[index] == 'L') {
			if ((index - head) % 2 == 0) {
				LEnd++;
			} else {
				REnd++;
			}
			index++;
		}
		if ((index - head) % 2 == 0) {
			swap(LEnd, REnd);
		}
		ans[head - 1] += REnd;
		ans[head] += LEnd;
	}

	for (int i = 0; (size_t)i < S.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << "\n";

	return 0;
}
