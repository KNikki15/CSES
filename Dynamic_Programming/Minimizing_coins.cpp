#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n,m;
 cin>>n>>m;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  vector<int>dp(m+1,1e9);
  dp[0]=0;
  for(int i=1;i<=m;i++){
    for(int j=0;j<n;j++){
      if(arr[j]<=i){
        dp[i]=min(dp[i],dp[i-arr[j]]+1);
        }
      }
    }
  if(dp[m]<1e9){
    cout<<dp[m]<<endl;
  }
  else{
  cout<<-1<<endl;
  }
return 0;
}
