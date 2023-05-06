#include <bits/stdc++.h>
using namespace std;
void subsequenc(vector<int>arr, int index=0,vector<int> output = {}){
    if(index>=arr.size()){
for(auto i : output){
    cout<<i<<" ";
}
if(output.size()==0)cout<<"{}";
cout<<endl;
return;

    }
//not pick or not take condition
    subsequenc(arr,index+1,output);
    output.push_back(arr[index]);
    //element is added so pick condition
subsequenc(arr,index+1,output);
    output.pop_back();
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
