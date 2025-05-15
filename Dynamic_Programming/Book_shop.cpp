#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,x,i,j;
cin>>n>>x;
vector<int>val(n);
vector<int>w(n);
for(i=0;i<n;i++){
cin>>w[i];
}
for(i=0;i<n;i++){
cin>>val[i];
}
vector<int>dp(x+1,0);
for(i=1;i<=n;i++){
vector<int>cur(x+1);
for(j=0;j<=x;j++){
int t1=w[i-1];
int t2=val[i-1];
int pick=(j>=t1?dp[j-t1]+t2:0);
int skip=dp[j];
cur[j]=max(skip,pick);
}
dp=cur;
}
cout<<dp[x]<<endl;
return 0;
}
