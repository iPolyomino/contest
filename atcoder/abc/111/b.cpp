#include <bits/stdc++.h>

using namespace std;

#define MAX 999

int main()
{
	int N;

	cin >> N;

	for (int i = N; i <= MAX; i++) {
		if (i % 111 == 0) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}
