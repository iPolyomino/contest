#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < int >a(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	cout << a.back() - a.front() << endl;

	return 0;
}
