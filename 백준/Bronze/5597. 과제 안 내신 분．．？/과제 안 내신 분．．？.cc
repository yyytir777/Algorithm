#include <iostream>
using namespace std;

int main() {
	int arr[31] = { 0 };
	int idx;

	for (int i = 0; i < 28; i++) {
		cin >> idx;
		arr[idx] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0)
			cout << i << endl;
	}
}