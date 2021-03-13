#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	vector < int >p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}

	vector < double >pp(N);
	double sum = 0;
	for (int i = 0; i < K; i++) {
		pp[i] = (double)(p[i] + 1) / 2;
		sum += pp[i];
	}

	double maxSum = sum;

	for (int i = K; i < N; i++) {
		pp[i] = (double)(p[i] + 1) / 2;

		sum -= pp[i - K];
		sum += pp[i];
		maxSum = max(maxSum, sum);
	}

	printf("%.10f\n", maxSum);

	return 0;
}
