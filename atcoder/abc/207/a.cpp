#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	cout << A + B + C - min(min(A, B), C) << endl;
	return 0;
}
