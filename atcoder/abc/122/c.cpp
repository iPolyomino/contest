#include <bits/stdc++.h>

using namespace std;

#define MAX_Q 100010

int main()
{
	int N, Q;
	string S;
	int l[MAX_Q], r[MAX_Q];

	cin >> N >> Q;
	cin >> S;

	int ACcount[MAX_Q];

	for (int i = 0; i < Q; i++) {
		cin >> l[i] >> r[i];
		l[i]--;
		r[i]--;
	}

	ACcount[0] = 0;
	for (int i = 1; i < N; i++) {
		ACcount[i] = ACcount[i - 1];
		if (S[i - 1] == 'A' && S[i] == 'C') {
			ACcount[i]++;
		}
	}

	for (int i = 0; i < Q; i++) {
		int count = ACcount[r[i]] - ACcount[l[i]];
		cout << count << endl;
	}

	return 0;
}
