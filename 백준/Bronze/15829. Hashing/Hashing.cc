#include<iostream>
#define r 31
#define M 1234567891
using namespace std;

int main() {
    int l;
    cin >> l;

    string temp;
    cin >> temp;

    int w = 1;
    int sum = 0;
    for(int i = 0; i < l; i++) {
        sum += (int(temp[i]) - 96) * w;
        w *= r;
    }

    cout << sum % M;
}