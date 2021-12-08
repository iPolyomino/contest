#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector < int >rows(N);
	vector < set < int > >K;

	for (int i = 0; i < N; i++) {
		int r;
		cin >> r;
		rows.push_back(r);

		set < int >st;
		for (int j = 0; j < r; j++) {
			int c;
			cin >> c;
			st.insert(c);
		}
		K.push_back(st);
	}

	set < int >evelyone = K[0];

	for (int i = 1; i < N; i++) {
		set < int >tmp_set;
		set_intersection(evelyone.begin(), evelyone.end(), K[i].begin(),
				 K[i].end(), inserter(tmp_set,
						      tmp_set.begin()));
		evelyone.swap(tmp_set);
	}

	cout << evelyone.size() << endl;

	return 0;
}
