#include <bits/stdc++.h>

using namespace std;

#define V_MAX 100010

int main()
{
	int n;

	cin >> n;
	vector < int >v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int odd[V_MAX] = { };
	int even[V_MAX] = { };

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			even[v[i]]++;
		} else {
			odd[v[i]]++;
		}
	}

	int oddMaxIndex, evenMaxIndex;
	oddMaxIndex = evenMaxIndex = 0;
	int oddSecondMaxIndex, evenSecondMaxIndex;
	oddSecondMaxIndex = evenSecondMaxIndex = 0;

	for (int i = 1; i < V_MAX; i++) {
		if (even[evenMaxIndex] < even[i]) {
			evenSecondMaxIndex = evenMaxIndex;
			evenMaxIndex = i;
		} else if (even[evenSecondMaxIndex] < even[i]) {
			evenSecondMaxIndex = i;
		}
		if (odd[oddMaxIndex] < odd[i]) {
			oddSecondMaxIndex = oddMaxIndex;
			oddMaxIndex = i;
		} else if (odd[oddSecondMaxIndex] < odd[i]) {
			oddSecondMaxIndex = i;
		}
	}

	if (oddMaxIndex == evenMaxIndex) {
		int second = max(odd[oddMaxIndex] + even[evenSecondMaxIndex],
				 odd[oddSecondMaxIndex] + even[evenMaxIndex]);
		cout << n - second << endl;
	} else {
		cout << n - odd[oddMaxIndex] - even[evenMaxIndex] << endl;
	}

	return 0;
}
