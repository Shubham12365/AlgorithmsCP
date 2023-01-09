#include <bits/stdc++.h>
using namespace std;

void bfs(int root, vector<int> adj[], int v)
{
    vector<bool> vis(v + 1, false);
    vis[root] = true;
    queue<int> q;
    q.push(root);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int it : adj[u])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = true;
            }
        }
    }
}
int main()
{
    cout << "Enter number of vertices: " << endl;
    int n;
    cin >> n;

    vector<int> adj[n + 1];
    cout << "Enter the edges : " << endl;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1, adj, n);
    return 0;
}

Time Complexity: O(V+E)
