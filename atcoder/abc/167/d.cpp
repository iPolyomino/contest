#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N, K;
	cin >> N >> K;
	vector < ll > A(N + 1);
	for (ll i = 1; i <= N; i++) {
		cin >> A[i];
	}

	set < ll > went;
	ll current = 1;
	ll roopStartNum = 0;
	for (ll i = 1; i <= N; i++) {
		if (went.find(current) != went.end()) {
			roopStartNum = current;
			break;
		}
		went.insert(current);
		current = A[current];
	}

	current = 1;
	for (ll i = 0; i <= K; i++) {
		if (current == roopStartNum) {
			K = i + (K - i) % (went.size() - i);
			break;
		}
		current = A[current];
	}

	current = 1;
	for (ll i = 0; i < K; i++) {
		current = A[current];
	}

	cout << current << endl;

	return 0;
}
