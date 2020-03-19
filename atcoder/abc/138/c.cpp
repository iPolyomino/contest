#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	double ans = v[0];
	for (int i = 1; i < N; i++) {
		ans = (ans + (double)v[i]) / 2.0;
	}

	printf("%.10f\n", ans);

	return 0;
}
