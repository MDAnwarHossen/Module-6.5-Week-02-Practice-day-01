#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    vector<int> adjList[N + 1];
    vector<vector<int>> adjMat(N + 1, vector<int>(N + 1));
    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        adjList[from].push_back(to);
        adjMat[from][to] = 1;
    }
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}