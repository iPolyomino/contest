#include <bits/stdc++.h>

using namespace std;

#define MAX_N 20

int n;
int a[MAX_N + 10];
int k;

bool dfs(int i, int sum)
{
	if (i == n) {
		return sum == k;
	}

	if (dfs(i + 1, sum)) {
		return true;
	}
	if (dfs(i + 1, sum + a[i])) {
		return true;
	}
	return false;
}

int main()
{

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;

	if (dfs(0, 0)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
