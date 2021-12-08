#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >H(N);

	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	int current = H[0] - 1;

	for (int i = 0; i < N; i++) {
		if (H[i] < current) {
			cout << "No" << endl;
			return 0;
		}
		current = H[i] == current ? current : H[i] - 1;
	}

	cout << "Yes" << endl;

	return 0;
}
