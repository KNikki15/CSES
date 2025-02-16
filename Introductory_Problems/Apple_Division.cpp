#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i,j;
cin>>n;
long int totalsum=0;
vector<long int>apples(n);
for(i=0;i<n;i++){
cin>>apples[i];
totalsum+=apples[i];
}
long int mini=INT_MAX;
for(i=0;i<(1<<n);i++){
long int subsum=0;
  for(j=0;j<n;j++){
  if(i&(1<<j)){
  subsum+=apples[j];
  }
  }
  long int diff=abs(totalsum-2*subsum);
  mini=min(mini,diff);
}
cout<<mini<<endl;
return 0;
}
