#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
long long x,i,j;
cin>>n>>x;
vector<pair<long long,int>>mp(n);
for(i=0;i<n;i++){
  cin>>mp[i].first;
  mp[i].second=i+1;
}
sort(mp.begin(),mp.end());
for(i=0;i<n-3;i++){
  for(j=i+1;j<n-2;j++){
  long long temp=x-mp[i].first-mp[j].first;
  int l=j+1,r=n-1;
  while(l<r){
  long long sum=mp[l].first+mp[r].first;
  if(sum==temp){
  cout<<mp[i].second<<" "<<mp[j].second<<" "<<mp[l].second<<" "<<mp[r].second<<endl;
  return 0;
  }
  else if(sum<temp) l++;
  else r--;
  }
  }
  }
  cout<<"IMPOSSIBLE"<<endl;
return 0;
}
