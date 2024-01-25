#include <iostream>
using namespace std;

int main() {
	int arr[6] = { 1, 1, 2, 2, 2, 8 };
	int result_arr[6];

	for (int i = 0; i < 6; i++) {
		cin >> result_arr[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << arr[i] - result_arr[i] << " ";
	}
}