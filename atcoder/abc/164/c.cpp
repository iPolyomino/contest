#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector < string > S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());

	cout << S.size() << endl;

	return 0;
}
