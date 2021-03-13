#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	map < string, int >result =
	{ { "AC", 0 }, { "WA", 0 }, { "TLE", 0 }, { "RE", 0 } };

	vector < string > S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	for (int i = 0; i < N; i++) {
		result[S[i]]++;
	}

	cout << "AC x " << result["AC"] << endl;
	cout << "WA x " << result["WA"] << endl;
	cout << "TLE x " << result["TLE"] << endl;
	cout << "RE x " << result["RE"] << endl;

	return 0;
}
