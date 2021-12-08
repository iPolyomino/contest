#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector < ll > A(1 << N);

	for (int i = 0; i < (1 << N); i++) {
		cin >> A[i];
	}

	int half = 1 << (N - 1);
	int max = max_element(A.begin(), A.end()) - A.begin();
	auto start = max < half ? A.begin() + half : A.begin();

	cout << max_element(start, start + half) - A.begin() + 1 << endl;

	return 0;
}
