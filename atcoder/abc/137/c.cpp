#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;
	cin >> N;
	vector < string > S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	for (int i = 0; i < N; i++) {
		sort(S[i].begin(), S[i].end());
	}

	sort(S.begin(), S.end());

	ll ans = 0;

	ll index = 0;

	while (index < N) {
		string head = S[index];
		ll move = 1;
		while (index + move < N && S[index + move] == head) {
			move++;
		}
		ans += move * (move - 1) / 2;
		index += move;
	}

	cout << ans << endl;

	return 0;
}
