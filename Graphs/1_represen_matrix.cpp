#include <bits/stdc++.h>
using namespace std;

int main(){
int node,m;
cin>>node>>m;
int adj[node+1][node+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u][v]=adj[v][u]=1;
    

}
for(int i=0;i<node+1;i++){
    for(int j=0;j<node+1;j++){
        cout<<adj[i][j]<<" ";
    }cout<<endl;
}

return 0;
} 