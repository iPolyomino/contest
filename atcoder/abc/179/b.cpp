#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector < pair < int, int >>D(N);
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		D[i] = make_pair(a, b);
	}

	int state = 0;
	for (int i = 0; i < N; i++) {
		if (D[i].first == D[i].second) {
			state++;
			if (state >= 3) {
				cout << "Yes" << endl;
				return 0;
			}
		} else {
			state = 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
