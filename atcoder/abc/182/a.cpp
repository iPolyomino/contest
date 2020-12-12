#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	cout << max(2 * A + 100 - B, 0) << endl;
	return 0;
}
