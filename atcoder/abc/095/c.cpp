#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C, X, Y;

	cin >> A >> B >> C >> X >> Y;

	int PizaA = X, PizaB = Y, PizaC = 0;

	while ((A + B) > C * 2 && PizaA > 0 && PizaB > 0) {
		PizaA--;
		PizaB--;
		PizaC += 2;
	}

	while (A > C * 2 && PizaA > 0) {
		PizaA--;
		PizaC += 2;
	}

	while (B > C * 2 && PizaB > 0) {
		PizaB--;
		PizaC += 2;
	}

	cout << A * PizaA + B * PizaB + C * PizaC << endl;

	return 0;
}
