#include <bits/stdc++.h>

using namespace std;

int sumOfNum(int number)
{
	int total = 0;

	while (number > 0) {
		total += number % 10;
		number /= 10;
	}
	return total;
}

int main()
{
	int n, a, b;

	cin >> n >> a >> b;

	int result = 0;

	for (int i = 1; i <= n; i++) {
		if (a <= sumOfNum(i) && sumOfNum(i) <= b) {
			result += i;
		}
	}

	cout << result << endl;
	return 0;
}
