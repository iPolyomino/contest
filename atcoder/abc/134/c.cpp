#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;
	cin >> N;

	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > sortedA(A);

	sort(sortedA.begin(), sortedA.end(), greater < ll > ());

	for (int i = 0; i < N; i++) {
		if (A[i] == sortedA[0]) {
			cout << sortedA[1] << endl;
		} else {
			cout << sortedA[0] << endl;
		}
	}

	return 0;
}
