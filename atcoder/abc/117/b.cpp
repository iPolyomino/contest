#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < int >L(N);
	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	sort(L.begin(), L.end());

	int max = L.back();
	L.pop_back();

	int sum = accumulate(L.begin(), L.end(), 0);

	cout << (max < sum ? "Yes" : "No") << endl;

	return 0;
}
