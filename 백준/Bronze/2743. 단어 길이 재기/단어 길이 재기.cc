#include <iostream>
#
using namespace std;

int main() {
	string a;
	cin >> a;
	int cnt = 0;
	for (int i = 0; a[i]; i++) {
		cnt++;
	}
	cout << cnt;
	return 0;
}