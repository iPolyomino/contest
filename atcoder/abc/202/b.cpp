#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;
	for (size_t i = 0; i < S.size(); i++) {
		if (S[S.size() - i - 1] == '6') cout << "9";
		else if (S[S.size() - i - 1] == '9') cout << "6";
		else printf("%c", S[S.size() - i - 1]);
	}
	cout << "\n";
	return 0;
}
