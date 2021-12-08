#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, x;

	cin >> a >> b >> x;
	double full = a * a * b;
	double half = full / 2.0;

	if (half <= x) {
		double height = (full - x) / (a * a) * 2;
		double theta = atan(height / a) * 180 / M_PI;
		printf("%.10f\n", theta);
	} else {
		double height = x / (a * b) * 2;
		double theta = (M_PI / 2 - atan(height / b)) * 180 / M_PI;
		printf("%.10f\n", theta);
	}

	return 0;
}
