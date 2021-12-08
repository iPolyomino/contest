#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int N;

	cin >> N;

	vector < ll > x(N), y(N), h(N);

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i] >> h[i];
	}

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			ll height = 0;
			for (int k = 0; k < N; k++) {
				if (h[k] != 0) {
					height =
						h[k] + abs(x[k] - i) + abs(y[k] -
									   j);
					break;
				}
			}
			bool isValid = true;

			for (int k = 0; k < N; k++) {
				ll hh =
					max(height - abs(x[k] - i) - abs(y[k] - j),
					    0LL);
				if (hh != h[k]) {
					isValid = false;
					break;
				}
			}
			if (isValid) {
				cout << i << " " << j << " " << height << endl;
			}
		}
	}

	return 0;
}
