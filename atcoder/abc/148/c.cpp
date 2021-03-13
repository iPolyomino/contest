#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B;

	cin >> A >> B;
	cout << A * B / __gcd(A, B) << endl;
	return 0;
}
