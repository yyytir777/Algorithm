#include <iostream>
using namespace std;

int main() {
	int n;
	int number = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		number += n * n;
	}
	number %= 10;
	cout << number;
}