#include <bits/stdc++.h>
using namespace std;
bool visited[1000];
void dfs(vector<int> adjList[], int root)
{
    visited[root] = true;
    for (int child : adjList[root])
    {
        if (visited[child])
        {
            continue;
        }
        dfs(adjList, child);
    }
    cout << root << " ";
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
    // for (int i = 1; i < N + 1; i++)
    // {
    //     for (int num : adjList[i])
    //     {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }
    dfs(adjList, 1);
    return 0;
}