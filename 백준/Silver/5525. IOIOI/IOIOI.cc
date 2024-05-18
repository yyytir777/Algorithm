#include <iostream>
#define MAX 1000001
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string tmp;
    cin >> tmp;

    string p = "";
    for(int i = 0; i < N; i++) {
        p += "IO";
    }
    p += "I";

    int cnt = 0;
    for(int i = 0; i < M; i++) {
        if(tmp[i] == 'I'){
            bool equals = 1;
            for(int j = 0; j <= 2 * N; j++) {
                if(tmp[i + j] != p[j]) equals = 0;
            }

            if(equals) cnt++;
        }
    }

    cout << cnt;
}