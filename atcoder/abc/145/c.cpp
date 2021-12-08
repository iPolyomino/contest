#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >x(N), y(N);

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	double total = 0;

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double xx = x[i] - x[j];
			double yy = y[i] - y[j];
			total += sqrt(xx * xx + yy * yy);
		}
	}

	printf("%.10f\n", total * 2 / N);
	return 0;
}
