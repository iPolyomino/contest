#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	vector < int >m(N);
	for (int i = 0; i < N; i++) {
		cin >> m[i];
	}

	sort(m.begin(), m.end());
	int sum = accumulate(m.begin(), m.end(), 0);

	X -= sum;

	cout << N + (X / m[0]) << endl;

	return 0;
}
