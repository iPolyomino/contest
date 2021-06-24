#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	set<int> A;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		A.insert(num);
	}

	if (A.size() == (size_t)N) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
