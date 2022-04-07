#include <bits/stdc++.h>

using namespace std;

int main()
{
	string A, B;

	cin >> A >> B;

	int sizeA = A.size();
	int sizeB = B.size();

	for (int i = 1; i <= min(sizeA, sizeB); i++) {
		if ((A[sizeA - i] - '0') + (B[sizeB - i] - '0') > 9) {
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;
	return 0;
}
