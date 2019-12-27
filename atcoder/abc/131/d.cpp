#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;
	cin >> N;
	vector < ll > A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	vector < pair < ll, ll >> BA(N);
	for (int i = 0; i < N; i++) {
		BA[i] = make_pair(B[i], A[i]);
	}

	sort(BA.begin(), BA.end());

	ll current = 0;
	for (int i = 0; i < N; i++) {
		if (current + BA[i].second > BA[i].first) {
			cout << "No" << endl;
			return 0;
		}
		current += BA[i].second;
	}

	cout << "Yes" << endl;
	return 0;
}
