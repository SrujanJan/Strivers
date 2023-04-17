#include <bits/stdc++.h>
using namespace std;
class solution{
    private:
    void DFS(int s,vector<int>adj[],int vis[],vector<int>&ls){
        vis[s]=1;
        ls.push_back(s);
        for(auto it:adj[s]){
            if(!vis[it]){
                vis[it]=1;
                DFS(it,adj,vis,ls);
            }
        }
    }
    public:
    vector<int>dfs(int e,vector<int>adj[]){
int start=1;
vector<int>ls;
int vis[e+1]={0};
DFS(start,adj,vis,ls);
return ls;
    }
};
void addedge(vector<int>adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int>&ans){
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}
int main(){
    vector<int>adj[28];
addedge(adj,1,2);
addedge(adj,1,3);
addedge(adj,2,5);
addedge(adj,2,6);
addedge(adj,3,4);
addedge(adj,3,7);
addedge(adj,4,8);
addedge(adj,7,8);
solution obj;
vector<int>ans=obj.dfs(8,adj);
print(ans);

return 0;
}