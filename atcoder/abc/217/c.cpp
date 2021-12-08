#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int>p(N), q(N);

	for (int i = 0; i < N; i++) {
		cin >> p[i];
		p[i]--;
	}

	for (int i = 0; i < N; i++) {
		q[p[i]] = i;
	}
	for (int i = 0; i < N; i++) {
		cout << q[i] + 1 << " ";
	}

	cout << "\n";

	return 0;
}
