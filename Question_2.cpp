#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> adjMat(N, vector<int>(N));
    vector<int> adjList[N + 1];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;
            adjMat[i][j] = x;
            if (x)
            {
                adjList[i + 1].push_back(j + 1);
            }
        }
    }
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << adjMat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= N; i++)
    {
        cout << "List " << i << " : ";
        for (int num : adjList[i])
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}