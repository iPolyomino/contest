#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	string S;
	cin >> S;

	// 1-0-1-0-...-1-0-1
	vector < int >nums;
	int now = 1;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] == (char)('0' + now)) {
			cnt++;
		} else {
			nums.push_back(cnt);
			now = 1 - now;
			cnt = 1;
		}
	}
	if (cnt != 0) {
		nums.push_back(cnt);
	}

	if (nums.size() % 2 == 0) {
		nums.push_back(0);
	}

	int add = 2 * K + 1;

	int ans = 0;

	int left = 0;
	int right = 0;

	int sum = 0;

	for (int i = 0; (size_t)i < nums.size(); i += 2) {
		int nextLeft = i;
		int nextRight = min(i + add, (int)nums.size());

		while (left < nextLeft) {
			sum -= nums[left];
			left++;
		}

		while (right < nextRight) {
			sum += nums[right];
			right++;
		}

		ans = max(sum, ans);
	}

	cout << ans << endl;

	return 0;
}
