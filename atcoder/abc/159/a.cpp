#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int even = N * (N - 1) / 2;
	int odd = M * (M - 1) / 2;

	cout << even + odd << endl;

	return 0;
}
