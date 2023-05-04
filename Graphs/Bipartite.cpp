#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool check(int start,int v,vector<int>adj[],int colour[]){
//declare a queue 
colour[start]=0;
        queue<int>q;
        q.push(start);
        
          while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it : adj[node]){
                //if the adjacent node is not colour colour it with opposite colour of node
                if(colour[it]==-1){
                        colour[it]=!(colour[node]);
                        //its not visited so it came inside if condition so push the element into queue
                        q.push(it);
                }
                //check if adjacent node colour is same as node
                //...this means the adjacent node is already colour
                //...return false
                else if(colour[it]==colour[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(int v,vector<int>adj[]){
        int colour[v];
        for(int i=0;i<v;i++){
            colour[i]=-1;
        }
        for(int i=0;i<v;i++){
            if(colour[i]==-1)
            {if(check(i,v,adj,colour)==false)return false;}
        }
        return true;
    }
};
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
vector<int>adj[4];

	addEdge(adj, 0, 2);
   	addEdge(adj, 0, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 1);
    Solution obj;
    bool ans=obj.isBipartite(4,adj);

if(ans)cout<<"it is bipartite\n";
else cout<<"it is not bipartite\n";
    return 0;
}