#include<bits/stdc++.h>
using namespace std;
 
long long invfact(long long temp,long long mod){
long long res=1;
long long expo=mod-2;
while(expo>0){
  if(expo%2==1){
  res=(res*temp)%mod;
  }
  temp=(temp*temp)%mod;
  expo/=2;
}
return res;
}
int main(){
string s;
cin>>s;
long long n=s.length(),i;
long long mod=1e9+7;
vector<long long>fact(n+1,1);
vector<long long>inverse(n+1,1);
 
for(i=2;i<=n;i++){
fact[i]=(fact[i-1]*i) % mod;
}
inverse[n]=invfact(fact[n],mod);
for(i=n-1;i>0;i--){
  inverse[i]=(inverse[i+1]*(i+1))% mod;
}
unordered_map<long long,long long>mp;
for(i=0;i<n;i++){
mp[s[i]]++;
}
long long res=fact[n];
for(const auto& entry:mp){
long long z=entry.second;
res=(res*inverse[z])% mod;
}
cout<<res<<endl;
return 0;
}
