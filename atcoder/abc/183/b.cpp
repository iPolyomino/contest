#include <bits/stdc++.h>

using namespace std;

int main()
{
	double sx, sy, gx, gy;

	cin >> sx >> sy >> gx >> gy;

	double xdiff = gx - sx;
	double ydiff = gy + sy;

	double ans = sx + xdiff * sy / ydiff;

	printf("%.10f\n", ans);

	return 0;
}
