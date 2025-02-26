#include<bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int>&a ,pair<int,int>&b){
  return a.second<b.second;
}
 
int main(){
long long n,k,i;
cin>>n>>k;
vector<pair<int,int>>movie(n);
for(i=0;i<n;i++){
  cin>>movie[i].first>>movie[i].second;
}
sort(movie.begin(),movie.end(),cmp);
set<pair<int,int>>poss;
int count=0;
for(i=0;i<n;i++){
  if(poss.size()==0){
  poss.insert({movie[i].second*-1,i});
  }else{
  auto it=poss.lower_bound({movie[i].first*-1,-1});
  if(it!=poss.end()){
    poss.erase(it);
    poss.insert({movie[i].second*-1,i});
  }
  else if(it==poss.end() && poss.size()<k){
    poss.insert({movie[i].second*-1,i});
    }
    else count++;
}
}
cout<<n-count<<endl;
return 0;
}
