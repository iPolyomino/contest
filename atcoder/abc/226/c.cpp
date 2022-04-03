#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define ll long long

int N;

vector<ll> T, K;
vector<vector<ll> > A;
set<int> done;

ll time(int n)
{
	ll ans = 0;

	ans += T[n];
	done.insert(n);

	for (int i = 0; i < K[n]; i++) {
		if (done.find(A[n][i]) == done.end()) {
			ans += time(A[n][i]);
		}
	}

	return ans;
}

int main()
{
	cin >> N;
	T.resize(N);
	K.resize(N);
	A.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> T[i] >> K[i];
		vector<ll> s;
		for (int j = 0; j < K[i]; j++) {
			int a;
			cin >> a;
			a--;
			s.push_back(a);
		}
		A[i] = s;
	}

	cout << time(N - 1) << endl;

	return 0;
}
