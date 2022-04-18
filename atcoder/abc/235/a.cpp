#include <bits/stdc++.h>

using namespace std;

int main()
{
	int abc;

	cin >> abc;

	int a = abc / 100;
	int b = abc / 10 % 10;
	int c = abc % 10;

	cout << (a + b + c) * 111 << endl;

	return 0;
}
