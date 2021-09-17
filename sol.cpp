#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x;
	cin >> x;
	string s;
	getline(cin, s);
	if (s == " of week") {
		// since 2016 is a leap year, there are a total of 366 days
		// Friday and Saturday have 53 days while the others have 52
		cout << (x == 5 || x == 6 ? 53 : 52);
	} else {
		// if Limak will save every 29-th day, then all months can handle it
		// if Limak will save every 30-th day, then all months except February can handle it
		// if Limak will save every 31-th day, then only those months that contain 31 days can handle it
		if (x >= 30 && x <= 31) {
			cout << (x == 31 ? 7 : 11);
		} else {
			cout << 12;
		}
	}
	cout << '\n';
	return 0;
}
