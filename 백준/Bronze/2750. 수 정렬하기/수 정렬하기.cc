#include <iostream>
#include <algorithm> //sort함수
using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    int arr[1000];

    for(int i = 0; i < cnt; i++){
        cin >> arr[i];
    }

    sort(arr, arr + cnt);

    for(int i = 0; i < cnt; i++){
        cout << arr[i] << endl;
    }
    return 0;
}