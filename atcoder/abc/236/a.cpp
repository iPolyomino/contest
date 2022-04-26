#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	int a, b;

	cin >> a >> b;
	a--; b--;

	char cha = S[a];
	char chb = S[b];

	S[a] = chb;
	S[b] = cha;

	cout << S << endl;

	return 0;
}
