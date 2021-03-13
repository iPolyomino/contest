#include <bits/stdc++.h>

using namespace std;

typedef pair < int, int >P;

P f(int x)
{
	int a = x % 10;
	int b = 0;

	while (x) {
		b = x;
		x /= 10;
	}
	return P(a, b);
}

int main()
{
	int N;

	cin >> N;
	map < P, int >freq;
	for (int i = 1; i <= N; i++) {
		P p = f(i);
		freq[p]++;
	}

	long long ans = 0;
	for (int i = 1; i <= N; i++) {
		P p = f(i);
		P q(p.second, p.first);
		ans += freq[q];
	}

	cout << ans << endl;

	return 0;
}
