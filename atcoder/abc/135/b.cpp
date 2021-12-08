#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >p(N);

	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}

	int wrongIndex = -1;

	for (int i = 0; i < N; i++) {
		if (p[i] != i + 1) {
			if (wrongIndex == -1) {
				wrongIndex = i;
			} else {
				if (p[wrongIndex] != i + 1) {
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}
