#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	int K;

	cin >> S;
	cin >> K;


	sort(S.begin(), S.end());
	int counter = 1;
	do {
		if (counter == K) {
			cout << S << endl;
			break;
		}
		counter++;
	} while (next_permutation(S.begin(), S.end()));

	return 0;
}
