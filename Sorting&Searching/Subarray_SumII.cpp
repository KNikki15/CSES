#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i,x;
cin>>n>>x;
vector<long int> arr(n);
map<long int,long int> mp;
mp[0]=1;
for(i=0;i<n;i++){
  cin>>arr[i];
}
long int count=0,sum=0;
for(i=0;i<n;i++){
  sum+=arr[i];
  count+=mp[sum-x];
  mp[sum]++;
}
cout<<count<<endl;
}
