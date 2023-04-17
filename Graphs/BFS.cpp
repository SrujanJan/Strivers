#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> bfs(int v, vector<int> adj[])
    {
        int vis[v+1]={0};
        vis[1] = 1;
        queue<int> q;
        q.push(1);
        vector<int> bfsp;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfsp.push_back(node);
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfsp;
    }
};
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<int> adj[28];
    addEdge(adj, 1, 6);
    addEdge(adj,1,2);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 7);
    addEdge(adj, 6, 7);
    addEdge(adj, 6, 8);




    solution obj;
    vector<int> ans = obj.bfs(8, adj);
    print(ans);
    return 0;
}