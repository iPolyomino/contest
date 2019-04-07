#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int X, Y, Z, K;
	cin >> X >> Y >> Z >> K;

	vector < ll > A(X);
	vector < ll > B(Y);
	vector < ll > C(Z);

	for (int i = 0; i < X; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < Y; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < Z; i++) {
		cin >> C[i];
	}

	sort(A.begin(), A.end(), greater < ll > ());
	sort(B.begin(), B.end(), greater < ll > ());
	sort(C.begin(), C.end(), greater < ll > ());

	vector < ll > ansV;

	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			for (int k = 0; k < Z; k++) {
				if ((i + 1) * (j + 1) * (k + 1) <= K) {
					ansV.push_back(A[i] + B[j] + C[k]);
				} else {
					break;
				}
			}
		}
	}
	sort(ansV.begin(), ansV.end(), greater < ll > ());

	for (int i = 0; i < K; i++) {
		cout << ansV[i] << endl;
	}

	return 0;
}
