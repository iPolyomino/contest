#include <bits/stdc++.h>

using namespace std;

int main()
{
	double N, K;

	cin >> N >> K;

	double ans = 0;

	for (int i = 1; i <= N; i++) {
		int throwCount = max(ceil(log2(K / (double)i)), 0.0);
		ans += (1.0 / N) * pow(0.5, throwCount);
	}

	printf("%.12f\n", ans);

	return 0;
}
