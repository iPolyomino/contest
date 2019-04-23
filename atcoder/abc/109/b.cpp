#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < string > W(N);
	for (int i = 0; i < N; i++) {
		cin >> W[i];
	}

	bool isOK = true;
	for (int i = 1; i < N && isOK; i++) {
		if (W[i - 1].back() != W[i].front()) {
			isOK = false;
		}
		for (int j = 0; j < i; j++) {
			if (W[i] == W[j]) {
				isOK = false;
			}
		}
	}

	cout << (isOK ? "Yes" : "No") << endl;

	return 0;
}
