#include <bits/stdc++.h>

using namespace std;

int div(int n)
{
	int cnt = 0;

	while (n % 100 == 0) {
		n /= 100;
		cnt++;
	}
	return cnt;
}

int main()
{
	int D, N;

	cin >> D >> N;

	int nb = 0;
	int i = 0;

	while (nb < N) {
		i++;
		if (div(i) == D) {
			nb++;
		}
	}

	cout << i << endl;

	return 0;
}
