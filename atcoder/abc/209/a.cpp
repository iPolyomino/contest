#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;
	cout << max(B - A + 1, 0) << endl;
	return 0;
}
