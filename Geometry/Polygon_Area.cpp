#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i;
cin>>n;
vector<pair<long long,long long>>point(n);
for(i=0;i<n;i++){
  cin>>point[i].first>>point[i].second;
}
long long area=0;
for(i=0;i<n;i++){
  long long x1=point[i].first,y1=point[i].second;
  long long x2=point[(i+1)%n].first,y2=point[(i+1)%n].second;
  area+=(x1*y2) - (x2*y1);
}
cout<<abs(area)<<endl;
return 0;
}
