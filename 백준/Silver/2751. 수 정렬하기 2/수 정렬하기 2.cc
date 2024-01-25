#include <iostream>
#include <algorithm> //sort함수
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int cnt;
    cin >> cnt;
    int arr[1000000];

    for(int i = 0; i < cnt; i++){
        cin >> arr[i];
    }

    sort(arr, arr + cnt);

    for(int i = 0; i < cnt; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}