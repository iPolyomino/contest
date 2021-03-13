#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector < int >L(M);
	vector < int >R(M);

	for (int i = 0; i < M; i++) {
		cin >> L[i] >> R[i];
	}

	cout << max(*min_element(R.begin(), R.end()) -
		    *max_element(L.begin(), L.end()) + 1, 0) << endl;

	return 0;
}
