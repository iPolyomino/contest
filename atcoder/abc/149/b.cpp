#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll A, B, K;

	cin >> A >> B >> K;

	A -= K;
	if (A < 0) {
		B += A;
	}

	cout << max((ll)0, A) << " " << max((ll)0, B) << endl;

	return 0;
}
