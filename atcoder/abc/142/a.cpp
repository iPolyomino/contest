#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int odd = ceil((double)N / 2);

	printf("%.10f\n", (double)odd / N);

	return 0;
}
