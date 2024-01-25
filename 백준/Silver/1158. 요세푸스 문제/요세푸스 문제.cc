#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main(){
    queue <int> q;
    vector <int> result;

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        q.push(i + 1);
    }
    //queuq 완성

    int a;
    while(q.size() > 1){
        for(int i = 1; i < k; i++){
            a = q.front();
            q.push(a);
            q.pop();
        }
        result.push_back(q.front());
        q.pop();
    }
    result.push_back(q.front());
    q.pop();

    vector <int>::iterator iter;

    cout << "<";
    for(iter = result.begin(); iter < result.end() - 1; iter++){
        cout << *iter << ", ";
    }
    cout << *iter << ">";
}