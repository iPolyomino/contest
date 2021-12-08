#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector < int >A(5);

	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}
	int K;

	cin >> K;

	sort(A.begin(), A.end());

	if (A[4] - A[0] > K) {
		cout << ":(" << endl;
	} else {
		cout << "Yay!" << endl;
	}
	return 0;
}
