#include <bits/stdc++.h>
using namespace std;
bool visited[1000];
int height[1000];
void dfs(vector<int> adjList[], int root)
{
    visited[root] = true;
    for (int val : adjList[root])
    {
        if (visited[val])
        {
            continue;
        }
        // depth[val] = depth[root] + 1;
        dfs(adjList, val);
        height[root] = max(height[root], height[val] + 1);
    }
}
int main()
{
    int N, E;
    cin >> N >> E;
    vector<int> adjList[N + 1];
    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        adjList[from].push_back(to);
        adjList[to].push_back(from);
    }
    int target;
    cin >> target;
    dfs(adjList, 1);
    cout << "height of " << target << " = " << height[target];
    return 0;
}