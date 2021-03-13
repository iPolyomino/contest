#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N, M;

	cin >> N >> M;

	vector < ll > A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector < ll > B(M), C(M);
	for (int i = 0; i < M; i++) {
		cin >> B[i] >> C[i];
	}

	vector < pair < ll, ll > > CB(M);
	for (int i = 0; i < M; i++) {
		CB[i] = make_pair(C[i], B[i]);
	}

	sort(A.begin(), A.end(), greater < ll > ());
	sort(CB.begin(), CB.end(), greater < pair < ll, ll > >());

	ll sum = 0;
	int aIndex, cbIndex;
	aIndex = cbIndex = 0;

	int i = 0;

	while (i < N) {
		if (CB[cbIndex].first > A[aIndex]) {
			if (N - i < CB[cbIndex].second) {
				sum += CB[cbIndex].first * (N - i);
				break;
			} else {
				sum += CB[cbIndex].first * CB[cbIndex].second;
				i += CB[cbIndex].second;
			}
			cbIndex++;
		} else {
			sum += A[aIndex];
			i++;
			aIndex++;
		}
	}

	cout << sum << endl;

	return 0;
}
