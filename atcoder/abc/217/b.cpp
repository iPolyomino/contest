#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	set<string> SS;

	for (int i  = 0; i < 3; i++) {
		cin >> S;
		SS.insert(S);
	}

	set <string> SALL = { "ABC", "ARC", "AGC", "AHC" };

	set <string> df;
	set_difference( SALL.begin(), SALL.end(), SS.begin(), SS.end(), inserter(df, df.end()));

	cout << *df.begin() << endl;

	return 0;
}
