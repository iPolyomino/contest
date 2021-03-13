#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X, N;

	cin >> X >> N;

	if (N == 0) {
		cout << X << endl;
		return 0;
	}
	vector < int >p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end());

	int leftIndex, rightIndex;
	leftIndex = rightIndex = 0;
	for (int i = 1; i < N; i++) {
		if (abs(p[i] - X) < abs(p[leftIndex] - X)) {
			leftIndex = rightIndex = i;
		}
	}

	for (int i = 0; i <= 100; i++) {
		int smallX = X - i;
		int bigX = X + i;
		if (p[leftIndex] == smallX) {
			leftIndex = max(leftIndex - 1, 0);
		} else {
			cout << smallX << endl;
			break;
		}

		if (p[rightIndex] == bigX) {
			rightIndex = min(rightIndex + 1, N - 1);
		} else {
			cout << bigX << endl;
			break;
		}
	}

	return 0;
}
