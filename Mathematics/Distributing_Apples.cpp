#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,m;
cin>>n>>m;
long int mod=1e9+7;
long int maxi=m+n-1,i;
vector<long int> fact(maxi+1);
vector<long int> arr(maxi+1);
fact[0]=1;
for(i=1;i<=maxi;i++){
  fact[i]=fact[i-1]*i%mod;
}
long int res=1,exp=mod-2,x=fact[maxi];
while(exp){
if(exp%2==1) res=(res*x)%mod;
x=(x*x)%mod;
exp/=2;
}
arr[maxi]=res;
long int count;
for(i=maxi-1;i>=0;i--){
  arr[i]=arr[i+1]*(i+1)%mod;
  }
long int a=m+n-1,b=n-1;
if(b>a) count=0;
else count=fact[a]*arr[b]%mod*arr[a-b]%mod; 
cout<<count<<endl;
return 0;
}
