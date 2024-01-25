#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string string;
	cin >> string;
	for (int i = 0; i < string.length(); i++) {
		if (string[i] <= 90 && string[i] >= 65)
			string[i] += 32;
		else
			string[i] -= 32;
	}
    cout << string;
}