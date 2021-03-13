#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A[4];

	for (int i = 0; i < 4; i++) {
		cin >> A[i];
	}
	cout << min(min(A[0], A[1]), min(A[2], A[3])) << endl;
	return 0;
}
