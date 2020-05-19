#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A, B, H, M;
	cin >> A >> B >> H >> M;

	double shortDegree = 30.0 * H + 0.5 * M;
	double longDegree = 6.0 * M;

	double degree = abs(shortDegree - longDegree);
	double rad = min(degree, 360.0 - degree) * M_PI / 180.0;

	double dist = sqrt((A * A + B * B) - 2.0 * A * B * cos(rad));

	printf("%.15f\n", dist);

	return 0;
}
