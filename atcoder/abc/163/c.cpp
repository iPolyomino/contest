#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector < int >A(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int index = 0;
	for (int i = 1; i <= N; i++) {
		int count = 0;
		while ((size_t)index < A.size()) {
			if (A[index] > i) {
				break;
			}

			if (A[index] == i) {
				count++;
			}
			index++;
		}

		cout << count << endl;
	}

	return 0;
}
