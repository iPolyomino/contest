#include <bits/stdc++.h>

using namespace std;

double T, A;

double tempDiff(double h)
{
	return abs(A - (T - h * 0.006));
}

int main()
{
	double N;

	cin >> N;
	cin >> T >> A;
	vector < double >H(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	int ans = 0;
	for (int i = 1; i < N; i++) {
		if (tempDiff(H[i]) < tempDiff(H[ans])) {
			ans = i;
		}
	}

	cout << ans + 1 << endl;

	return 0;
}
