#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	double ans = 0;
	for (int i = 0; i < N; i++) {
		ans += 1.0 / (double)A[i];
	}

	printf("%.10f\n", 1.0 / ans);
	return 0;
}
