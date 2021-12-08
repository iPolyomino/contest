#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, L;

	cin >> N >> L;

	int min = L;
	int sum = 0;

	for (int i = L; i <= L + N - 1; i++) {
		if (abs(i) < abs(min)) {
			min = i;
		}
		sum += i;
	}

	cout << sum - min << endl;

	return 0;
}
