#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, X, Y;

	cin >> N >> M >> X >> Y;

	vector < int >x(N);
	vector < int >y(M);

	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> y[i];
	}

	int xMax = *max_element(x.begin(), x.end());
	int yMin = *min_element(y.begin(), y.end());

	if (xMax < yMin && X < yMin && yMin <= Y) {
		cout << "No War" << endl;
	} else {
		cout << "War" << endl;
	}

	return 0;
}
