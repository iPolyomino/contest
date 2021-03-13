#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;
	int mi = min(A, B);
	int ma = max(A, B);
	if (mi <= C && C <= ma) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
