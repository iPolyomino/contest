#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N >= 42) {
		N++;
	}
	cout << "AGC" << setfill('0') << setw(3) << N  << endl;
	return 0;
}
