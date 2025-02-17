#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long n,i;
  cin>>n;
  vector<pair<long long,long long>>df(n);
  for(i=0;i<n;i++){
    cin>>df[i].first>>df[i].second;
  }
  sort(df.begin(),df.end());//sorting duration
  long long maxi=0,duration=0;
  for(i=0;i<n;i++){
    duration+=df[i].first;
    maxi+=(df[i].second-duration);
  }
  cout<<maxi<<endl;
return 0;
}
