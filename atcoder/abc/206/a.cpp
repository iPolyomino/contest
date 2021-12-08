#include <bits/stdc++.h>

using namespace std;

int main()
{
	double N;

	cin >> N;
	int c = floor(1.08 * N);

	if (c < 206) {
		cout << "Yay!" << endl;
	} else if (c == 206) {
		cout << "so-so" << endl;
	}else {
		cout << ":(" << endl;
	}
	return 0;
}
