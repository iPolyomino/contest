#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<pair<int, int> > A(N);
	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		A[i] = make_pair(ai, i + 1);
	}

	sort(A.begin(), A.end(), greater<pair<int, int> >());

	cout << A[1].second << endl;

	return 0;
}
