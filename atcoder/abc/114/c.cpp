#include <bits/stdc++.h>

using namespace std;

int ans = 0;
int n;

bool is357(long long n)
{
	bool three, five, seven;
	three = five = seven = false;

	string s = to_string(n);
	for (int i = 0; (size_t)i < s.size(); i++) {
		if (s[i] == '3') {
			three = true;
		} else if (s[i] == '5') {
			five = true;
		} else if (s[i] == '7') {
			seven = true;
		}
	}

	return three && five && seven;
}

void search(long long head)
{
	if (head <= n) {
		if (is357(head)) {
			ans++;
		}
		search(head * 10 + 3);
		search(head * 10 + 5);
		search(head * 10 + 7);
	}
}

int main()
{
	cin >> n;

	search(0);

	cout << ans << endl;
	return 0;
}
