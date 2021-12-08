#include <bits/stdc++.h>

using namespace std;


int main()
{
	int N, K;

	cin >> N >> K;

	vector <int> c(N + 1);

	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}

	map<int, int> mp;

	for (int i = 0; i < K; i++) {
		mp[c[i]]++;
	}

	int ans = mp.size();

	for (int i = K; i < N; i++) {
		mp[c[i]]++;
		mp[c[i - K]]--;
		if (mp[c[i - K]] == 0) mp.erase(c[i - K]);
		ans = max(ans, (int)mp.size());
	}
	cout << ans << endl;

	return 0;
}
