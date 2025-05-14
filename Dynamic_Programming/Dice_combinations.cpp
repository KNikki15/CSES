#include<bits/stdc++.h>
using namespace std;
 
long long dp[1000100];
long long mod=1e9+7;
 
int main(){
int n;
cin>>n;
for(long long i=0;i<=n;i++){
if(i==0){
 dp[i]=1;
}
else{
for(int j=1;j<=6;j++){
if(j<=i) dp[i]+=dp[i-j];
}
dp[i]%=mod;
}
}
cout<<dp[n]<<endl;
return 0;
}
