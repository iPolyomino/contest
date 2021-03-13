#include <iostream>
#include <vector>

using namespace std;

vector < int >prime_number;

bool isPrime(int n)
{
	for (auto p:prime_number) {
		if (n % p == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int x;

	cin >> x;

	int i = 2;
	while (i < x || !isPrime(i)) {
		if (isPrime(i)) {
			prime_number.push_back(i);
		}
		i++;
	}

	cout << i << endl;

	return 0;
}
