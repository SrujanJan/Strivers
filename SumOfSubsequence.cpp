#include <bits/stdc++.h>
using namespace std;
void SumSubsequence(int ind,int sum,vector<int>&ds,int arr[],int n,int s){
    //base case
    if(n==ind){
        if(s==sum){
            for(auto i:ds)cout<<i<<" ";
            cout<<endl;
        }return;
    }
    //pick case;
    ds.push_back(arr[ind]);
    s+=arr[ind];
    //call function
    SumSubsequence(ind+1,sum,ds,arr,n,s);
    //not pick condition
 s-=arr[ind];
 ds.pop_back();
    SumSubsequence(ind+1,sum,ds,arr,n,s);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
vector<int>ds;
// for(auto it:arr)ds.push_back(it);
int sum=2;
SumSubsequence(0,sum,ds,arr,n,0);
return 0;
}
