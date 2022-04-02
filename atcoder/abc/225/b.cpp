#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	N--;
	vector<int> a(N), b(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i];
	}

	bool isStar = true;

	for (int i = 0; i < N; i++) {
		if (a[0] != a[i] && a[0] != b[i]) {
			isStar = false;
		}
	}
	if (isStar) {
		cout << "Yes" << endl;
		return 0;
	}

	isStar = true;
	for (int i = 0; i < N; i++) {
		if (b[0] != a[i] && b[0] != b[i]) {
			isStar = false;
		}
	}
	if (isStar) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;

	return 0;
}
