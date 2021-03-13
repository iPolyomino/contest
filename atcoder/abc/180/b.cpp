#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;

	cin >> N;
	vector < ll > x(N);
	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	ll manhattan = 0;
	ll euclid = 0;
	ll chebyshev = LLONG_MIN;

	for (int i = 0; i < N; i++) {
		manhattan += abs(x[i]);
		euclid += x[i] * x[i];
		chebyshev = max(chebyshev, abs(x[i]));
	}

	cout << manhattan << endl;
	cout << fixed << setprecision(15) << sqrt(euclid) << endl;
	cout << chebyshev << endl;

	return 0;
}
