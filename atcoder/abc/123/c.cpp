#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll N;
	vector < ll > A(5);

	cin >> N;
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}

	ll min = *min_element(A.begin(), A.end());

	ll ans = 5;

	ans += ceil((double)N / min) - 1;

	cout << ans << endl;

	return 0;
}
