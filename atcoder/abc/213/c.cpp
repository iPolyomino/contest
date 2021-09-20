#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()

int main()
{
	int H, W, N;

	cin >> H >> W >> N;

	vector<int> A(N);
	vector<int> B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}


	vector<int> ys;
	for (int i = 0; i < N; i++) {
		ys.push_back(A[i]);
	}
	sort(all(ys));
	ys.erase(unique(all(ys)), ys.end());
	for (int i = 0; i < N; i++) {
		A[i] = lower_bound(all(ys), A[i]) - ys.begin();
	}

	vector<int> xs;
	for (int i = 0; i < N; i++) {
		xs.push_back(B[i]);
	}
	sort(all(xs));
	xs.erase(unique(all(xs)), xs.end());
	for (int i = 0; i < N; i++) {
		B[i] = lower_bound(all(xs), B[i]) - xs.begin();
	}

	for (int i = 0; i < N; i++) {
		cout << A[i] + 1 << " " << B[i] + 1 << endl;
	}

	return 0;
}
