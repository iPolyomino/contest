#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;
	string week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	for (int i = 0; i < 7; i++) {
		if (week[i] == S) {
			cout << 7 - i << endl;
			return 0;
		}
	}

	return 0;
}
