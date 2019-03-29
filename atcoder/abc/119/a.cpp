#include <bits/stdc++.h>

using namespace std;

int main()
{

	string S;
	cin >> S;

	int year = atoi(S.substr(0, 4).c_str());
	int month = atoi(S.substr(5, 2).c_str());

	bool isHeisei = false;

	if (year < 2019) {
		isHeisei = true;
	} else if (year == 2019) {
		if (month <= 4) {
			isHeisei = true;
		}
	}

	if (isHeisei) {
		cout << "Heisei" << endl;
	} else {
		cout << "TBD" << endl;
	}

	return 0;
}
