#include <bits/stdc++.h>

using namespace std;

#define N_MAX 20

int main()
{
	int N;
	cin >> N;

	double x[N_MAX];
	string u[N_MAX];

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> u[i];
	}

	double ans = 0;

	for (int i = 0; i < N; i++) {
		if (u[i] == "JPY") {
			ans += x[i];
		} else {
			ans += x[i] * 380000.0;
		}
	}

	cout << ans << endl;

	return 0;
}
