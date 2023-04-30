#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int current = 0;
	vector<int> sep;

	for (int i = 0; i < N; i++) {
		current += A[i];
		sep.push_back(current % 360);
	}

	sep.push_back(0);
	sep.push_back(360);

	sort(sep.begin(), sep.end());

	int diffmax = 0;

	for (size_t i = 1; i < sep.size(); i++) {
		diffmax = max(diffmax, sep[i] - sep[i - 1]);
	}

	cout << diffmax << endl;

	return 0;
}
