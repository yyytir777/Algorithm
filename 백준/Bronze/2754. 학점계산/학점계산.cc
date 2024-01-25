#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string string;
	cin >> string;
	double grade = 0.0;

	switch (string[0]) 
	{
	case 'A':
		grade += 4.0;
		break;
	case 'B':
		grade += 3.0;
		break;
	case 'C':
		grade += 2.0;
		break;
	case 'D':
		grade += 1.0;
		break;
	}

	switch (string[1]) 
	{
	case '+':
		grade += 0.3;
		break;
	case '-':
		grade -= 0.3;
		break;
	}
	printf("%0.1f", grade);
}