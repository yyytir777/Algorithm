#include <iostream>
using namespace std;

int main() {
	long a, b;
	cin >> a >> b;
	if ((a - b) < 0) {
		cout << b - a;
	}
	else
		cout << a - b;
}