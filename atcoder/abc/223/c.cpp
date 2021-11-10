#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector <double> A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	double time = 0;

	for (int i = 0; i < N; i++) {
		time += A[i] / B[i];
	}

	time /= 2.0;

	double ans = 0;
	for (int i = 0; i < N; i++) {
		ans += min(A[i], time * B[i]);
		time -= min(A[i] / B[i], time);
	}

	cout << fixed << setprecision(15) << ans  << endl;


	return 0;
}
