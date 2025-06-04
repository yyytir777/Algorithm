// 9466 cpp
#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int t;
int n;
int cnt;
int choice[MAX];
bool visited[MAX] = {0,};
bool finished[MAX] = {0,};

void init() {
  for(int i = 1; i <= n; i++) {
    visited[i] = 0;
    finished[i] = 0;
  }
}
void input() {
  cin >> n;

  for(int i = 1; i <= n; i++) {
    cin >> choice[i];
  }
}

void isCycle(int idx) {
  visited[idx] = 1;
  int next = choice[idx];

  if(!visited[next]) isCycle(next);
  else if(!finished[next]) {
    for(int i = next; i != idx; i = choice[i]) {
      cnt++;
    }
    cnt++;
  }
  finished[idx] = 1;
}

void print() {
  for(int i = 1; i <= n; i++) {
    printf("%d ", visited[i]);
  }
  cout << '\n';
}

void solve() {
  cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(!visited[i]) isCycle(i);
  }
  printf("%d\n", n - cnt);
}

int main() {
  cin >> t;
  while(t--) {
    init();
    input();
    solve();  
  }
  return 0;
}