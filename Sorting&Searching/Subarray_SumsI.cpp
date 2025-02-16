#include<bits/stdc++.h>
using namespace std;
 
int main(){
 long long n,x,i;
 cin>>n>>x;
 vector<long long>arr(n);
 for(i=0;i<n;i++){
 cin>>arr[i];
 }
 unordered_map<long long,long long>mp;
 long long count=0,curr=0;
 mp[0]=1;
 for(i=0;i<n;i++){
  curr+=arr[i];
  if(mp.find(curr-x)!=mp.end()){
  count+=mp[curr-x];
  }
  mp[curr]++;
 }
 cout<<count<<endl;
return 0;
}
