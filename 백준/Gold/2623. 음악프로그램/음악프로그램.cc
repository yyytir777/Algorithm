// 2623 cpp
#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int n, m;
int degree[MAX] = {0,};
int inputBuffer[MAX];
vector<int> v[MAX];
queue<int> q;

void input() {
    cin >> n >> m;

    int cnt;
    for(int i = 0; i < m; i++) {
        cin >> cnt;

        for(int j = 0; j < cnt; j++) {
            cin >> inputBuffer[j];
        }

        for(int j = 0; j < cnt; j++) {
            if(j == 0) continue;
            v[inputBuffer[j]].push_back(inputBuffer[j-1]);
            degree[inputBuffer[j-1]]++;
        }
    }
}

void dfs() {
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        if(degree[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int cur_node = q.front();
        q.pop();

        ans.push_back(cur_node);

        for(int i = 0; i < v[cur_node].size(); i++) {
            int nxt_node = v[cur_node][i];

            if(--degree[nxt_node] == 0) {
                q.push(nxt_node);
            }
        }
    }

    if(ans.size() != n) {
        cout << "0";
        return;
    }

    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << '\n';
    }
}

void solve() {
    dfs();
}

int main() {
    input();
    solve();
    return 0;
}