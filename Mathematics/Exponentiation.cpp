#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
long int a,b;
cin>>a>>b;
long int res=1,mod=1e9+7;
while(b>0){
if(b%2==1){
res=(res*a)%mod;
}
b/=2;
a=(a*a)%mod;
}
cout<<res<<endl;
}
return 0;
}
