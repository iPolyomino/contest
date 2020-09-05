#include <bits/stdc++.h>

using namespace std;

int main()
{
	double N, X, T;
	cin >> N >> X >> T;
	printf("%.0f\n", (ceil(N / X) * T));
	return 0;
}
