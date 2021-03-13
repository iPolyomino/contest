#include "bits/stdc++.h"
using namespace std;

#define N 100

int main()
{
	int n;

	cin >> n;
	int score[N];
	int total = 0;
	int donotuseNumbers = 0;

	for (int i = 0; i < N; i++) {
		score[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		total += score[i];
	}

	while (total % 10 == 0 && donotuseNumbers != n) {
		donotuseNumbers++;

		total = 0;
		for (int i = 0; i < n; i++) {
			int nowTotal = 0;
			for (int j = 0; j < n; j++) {
				if (i != j) {
					nowTotal += score[j];
				}
			}
			if (nowTotal % 10 != 0 && nowTotal > total) {
				total = nowTotal;
			}
		}
	}

	cout << total << endl;

	return 0;
}
