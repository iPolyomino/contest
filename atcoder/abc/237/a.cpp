#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long N;
	long long m = 1L << 31;

	cin >> N;

	if (-m <= N && N < m ) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
