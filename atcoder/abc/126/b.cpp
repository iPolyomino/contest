#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int front = stoi(S.substr(0, 2));
	int back = stoi(S.substr(2, 2));

	bool isFrontOk = 1 <= front && front <= 12;
	bool isBackOk = 1 <= back && back <= 12;

	if (isFrontOk && isBackOk) {
		cout << "AMBIGUOUS" << endl;
	} else if (isFrontOk) {
		cout << "MMYY" << endl;
	} else if (isBackOk) {
		cout << "YYMM" << endl;
	} else {
		cout << "NA" << endl;
	}

	return 0;
}
