#include<bits/stdc++.h>
using namespace std;
 
long long inv(long long x,long long mod){
  long long res=1,expo=mod-2;
  while(expo>0){
    if(expo%2==1){
      res=(res*x)%mod;
  }
  x=(x*x) % mod;
  expo/=2;
  }
  return res;
}
int main(){
 long long n,i;
 const int mod=1000000007;
 cin>>n;
 if(n%2!=0){
 cout<<0<<endl;
 return 0;
 }
 n/=2;
 vector<long long>fact(2*n+1,1);
 vector<long long>inverse(2*n+1,1);
 for(i=2;i<=2*n;i++){
  fact[i]=(fact[i-1]*i)%mod;
 }
 inverse[2*n]=inv(fact[2*n],mod);
 for(i=2*n -1;i>=1;i--){
 inverse[i]=(inverse[i+1]*(i+1)) %mod;
 }
 long long value=fact[2*n]*inverse[n] % mod;
 value=value*inverse[n+1] %mod;
 cout<<value<<endl;
return 0;
}
