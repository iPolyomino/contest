#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;

	cin >> S;

	set<string> numbers = {};

	for (int i = 0; i < 10000; i++) {
		string num = "0000" + to_string(i);
		numbers.insert(num.substr(num.length() - 4, 4));
	}

	for (size_t i = 0; i < S.size(); i++) {
		if (S[i] == 'o') {
			auto it = numbers.begin();
			while (it != numbers.end()) {
				if ((*it).find('0' + i) == string::npos) {
					it = numbers.erase(it);
				} else {
					++it;
				}
			}
		} else if (S[i] == 'x') {
			auto it = numbers.begin();
			while (it != numbers.end()) {
				if ((*it).find('0' + i) != string::npos) {
					it = numbers.erase(it);
				} else {
					++it;
				}
			}
		}
	}


	cout << numbers.size() << endl;

	return 0;
}
