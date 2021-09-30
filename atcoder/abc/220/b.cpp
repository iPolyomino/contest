#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int K;
	string A, B;

	cin >> K;
	cin >> A >> B;


	ll a = 0, b = 0;

	for (size_t i = 0; i < A.size(); i++) {
		a += (A[A.size() - i - 1] - '0') * pow(K, i);
	}
	for (size_t i = 0; i < B.size(); i++) {
		b += (B[B.size() - i - 1] - '0') * pow(K, i);
	}

	cout << a * b << endl;

	return 0;
}
