#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B, N;

	cin >> A >> B >> N;

	ll x = min(B - 1, N);

	cout << A * x / B << endl;

	return 0;
}
