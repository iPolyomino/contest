#include <bits/stdc++.h>

using namespace std;

long long axor(long long a)
{
	if (a % 4 == 0)
		return a;
	if (a % 4 == 1)
		return 1;
	if (a % 4 == 2)
		return a + 1;
	if (a % 4 == 3)
		return 0;

	// g++ -Wall warning
	return 0;
}

int main()
{
	long long A, B;

	cin >> A >> B;

	cout << (axor(B) ^ axor(A - 1)) << endl;

	return 0;
}
