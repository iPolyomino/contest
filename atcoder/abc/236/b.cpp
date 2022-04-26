#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int inputNums = N * 4 - 1;

	vector<int> A(inputNums);

	for (int i = 0; i < inputNums; i++) {
		cin >> A[i];
	}


	map<int, int> num;

	for (int i = 0; i < inputNums; i++) {
		num[A[i]]++;
	}

	for (auto &[key, value] : num) {
		if (value == 3) {
			cout << key << endl;
			break;
		}
	}


	return 0;
}
