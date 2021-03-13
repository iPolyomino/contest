#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector < int >x(N + 1);
	for (int i = 0; i < N + 1; i++) {
		cin >> x[i];
	}

	sort(x.begin(), x.end());

	int diffGCD = x[1] - x[0];
	for (int i = 1; i < N; i++) {
		diffGCD = __gcd(diffGCD, x[i + 1] - x[i]);
	}

	cout << diffGCD << endl;

	return 0;
}
