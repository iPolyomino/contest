#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	string S;

	cin >> S;


	if (S.find("1") % 2 == 0) {
		cout << "Takahashi" << endl;
	} else {
		cout << "Aoki" << endl;
	}

	return 0;
}
