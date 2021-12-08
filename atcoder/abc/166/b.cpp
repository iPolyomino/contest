#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	vector < int >d(K);
	vector < vector < int > >A(K);

	for (int i = 0; i < K; i++) {
		cin >> d[i];
		vector < int >tmp(d[i]);
		for (int j = 0; j < d[i]; j++) {
			cin >> tmp[j];
		}
		A[i] = tmp;
	}

	set < int >st;

	for (int i = 1; i <= N; i++) {
		st.insert(i);
	}

	set < int >al;

	for (int i = 0; i < K; i++) {
		set < int >confectionery(A[i].begin(), A[i].end());
		set_union(al.begin(), al.end(),
			  confectionery.begin(), confectionery.end(),
			  inserter(al, al.end()));
	}

	set < int >ans;

	set_difference(st.begin(), st.end(),
		       al.begin(), al.end(), inserter(ans, ans.end())
		       );

	cout << ans.size() << endl;

	return 0;
}
