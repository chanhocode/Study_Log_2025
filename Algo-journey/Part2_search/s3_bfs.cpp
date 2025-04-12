#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        
        for (int neighbor : graph[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

//int main() {
//    vector<vector<int>> graph = {
//        {},
//        {2, 3},
//        {4},
//        {5},
//        {},
//        {}
//    };
//
//    bfs(graph, 1);
//}