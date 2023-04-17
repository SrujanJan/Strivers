#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,w;
    cin>>n>>m;
vector<pair<int,int>>adj[n+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
}
return 0;
}