#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int x,n,i,j;
long int mod=1e9+7;
cin>>n>>x;
vector<long int>arr(n);
for(i=0;i<n;i++){
cin>>arr[i];
}
vector<long int> dp(x+1,0);
dp[0]=1;
for(i=0;i<n;i++){
for(j=arr[i];j<=x;j++){
dp[j]=(dp[j]+dp[j-arr[i]])%mod;
}
}
cout<<dp[x]<<endl;
return 0;
}

