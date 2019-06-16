#include <bits/stdc++.h>

using namespace std;

int main()
{
	double W, H, x, y;
	cin >> W >> H >> x >> y;

	int multiple = 0;
	if (2 * x == W && 2 * y == H) {
		multiple = 1;
	}
	printf("%10f %d\n", W * H / 2, multiple);

	return 0;
}
