#include <iostream>
#include <queue>
#define N 1010
#define INF 100000000
using namespace std;

vector<pair<int, int>> graph[N];
priority_queue<pair<int, int>> pq;
int dist[N];
bool visited[N] = {0,};
int n, m;

void dijkstra(int start) {
    pq.push({start, 0});
    dist[start] = 0;
    visited[start] = true;

    while(!pq.empty()) {
        int cur_node = pq.top().first;
        int cur_dist = -pq.top().second;
        pq.pop();
        
        if(dist[cur_node] < cur_dist) continue;

        for(int i = 0; i < graph[cur_node].size(); i++) {
            int nxt_node = graph[cur_node][i].first;
            int nxt_dist = dist[cur_node] + graph[cur_node][i].second;
            if(dist[nxt_node] > nxt_dist) {
                dist[nxt_node] = nxt_dist;
                pq.push({nxt_node, -nxt_dist});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    int from, to, cost;
    for(int i = 0; i < m; i++) {
        cin >> from >> to >> cost;
        graph[from].push_back({to, cost});
    }
    
    int start, dest;
    cin >> start >> dest;

    for(int i = 0; i <= n; i++) {
        dist[i] = INF;
    }

    dijkstra(start);

    cout << dist[dest];
}