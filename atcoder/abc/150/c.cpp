#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >P(N);

	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	vector < int >Q(N);

	for (int i = 0; i < N; i++) {
		cin >> Q[i];
	}

	vector < int >nums(N);

	for (int i = 0; i < N; i++) {
		nums[i] = i + 1;
	}

	int pnum = -1;
	int qnum = -1;
	int index = 1;

	do {
		if (P == nums) {
			pnum = index;
		}
		if (Q == nums) {
			qnum = index;
		}
		index++;
	} while (next_permutation(nums.begin(), nums.end()));

	cout << abs(qnum - pnum) << endl;

	return 0;
}
