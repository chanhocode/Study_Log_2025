#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph = {
    {}, // 0은 사용하지 않음
    {2,3},
    {4},
    {5},
    {},
    {}
};

vector<bool> visited(6, false);

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int neighbor : graph[v]) {
        if (!visited[neighbor])
            dfs(neighbor);
    }
}

//int main() {
//    dfs(1);
//}