#include <bits/stdc++.h>

using namespace std;

string X;

bool compare(string left, string right)
{
	int lIndex = X.find(left[0]);
	int rIndex = X.find(right[0]);

	if (lIndex == rIndex) {
		if (left.size() == 1) {
			return true;
		} else if (right.size() == 1) {
			return false;
		}
		return compare(left.substr(1), right.substr(1));
	}

	return lIndex < rIndex;
}

int main()
{
	cin >> X;
	int N;
	cin >> N;

	vector<string>S(N);
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	sort(S.begin(), S.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << S[i] << endl;
	}

	return 0;
}
