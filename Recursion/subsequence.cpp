#include <bits/stdc++.h>
using namespace std;
void subsequenc(vector<int>arr, int index=0,vector<int> output = {}){
    if(index>=arr.size()){
for(auto i : output){
    cout<<i<<" ";
}
cout<<endl;
return;

    }
   
    subsequenc(arr,index+1,output);
 output.push_back(arr[index]);
subsequenc(arr,index+1,output);
}
int main(){
int n;
cin>>n;
int  a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int>arr;
for(auto i : a){
    arr.push_back(i);
}
// for(auto i : arr){
//     cout<<i<<" ";
// }
subsequenc(arr);
return 0;
}