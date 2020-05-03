#include <bits/stdc++.h>

using namespace std;

int N;
string S;

int main()
{
	cin >> N;
	cin >> S;

	int a = 0, b = N - 1;

	while (a <= b) {
		bool left = false;
		for (int i = 0; a + i <= b; i++) {
			if (S[a + i] < S[b - i]) {
				left = true;
				break;
			} else if (S[a + i] > S[b - i]) {
				left = false;
				break;
			}
		}
		if (left) {
			cout << S[a++];
		} else {
			cout << S[b--];
		}
	}

	cout << "\n";

	return 0;
}
