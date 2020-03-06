#include <bits/stdc++.h>

using namespace std;

#define CARD_SIZE 3

int main()
{
	int A[CARD_SIZE][CARD_SIZE];
	for (int i = 0; i < CARD_SIZE; i++) {
		for (int j = 0; j < CARD_SIZE; j++) {
			cin >> A[i][j];
		}
	}

	int N;
	cin >> N;
	vector < int >b(N);
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	bool isOpen[CARD_SIZE][CARD_SIZE];
	for (int i = 0; i < CARD_SIZE; i++) {
		for (int j = 0; j < CARD_SIZE; j++) {
			isOpen[i][j] =
			    binary_search(b.begin(), b.end(), A[i][j]);
		}
	}

	// check row
	for (int i = 0; i < CARD_SIZE; i++) {
		bool isOK = true;
		for (int j = 0; j < CARD_SIZE; j++) {
			isOK = isOK && isOpen[i][j];
		}
		if (isOK) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	// check column
	for (int i = 0; i < CARD_SIZE; i++) {
		bool isOK = true;
		for (int j = 0; j < CARD_SIZE; j++) {
			isOK = isOK && isOpen[j][i];
		}
		if (isOK) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	// check Diagonal
	if ((isOpen[0][0] && isOpen[1][1] && isOpen[2][2])
	    || (isOpen[0][2] && isOpen[1][1] && isOpen[2][0])) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;

	return 0;
}
