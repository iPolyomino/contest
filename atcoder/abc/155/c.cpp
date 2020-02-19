#include <bits/stdc++.h>

using namespace std;

bool second_compare(pair < string, int >a, pair < string, int >b)
{
	if (a.second != b.second) {
		return a.second < b.second;
	} else {
		return a.first < b.first;
	}
}

int main()
{
	int N;
	cin >> N;
	vector < string > S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	sort(S.begin(), S.end());

	map < string, int >freq;
	for (int i = 0; i < N; i++) {
		freq[S[i]]++;
	}

	int freqMax = 0;
	for (int i = 0; i < N; i++) {
		freqMax = max(freqMax, freq[S[i]]);
	}
 for (auto mp:freq) {
		if (mp.second == freqMax) {
			cout << mp.first << endl;
		}
	}

	return 0;
}
