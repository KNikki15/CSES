#include<bits/stdc++.h>
using namespace std;
 
long int modulo(long int n){
long int val=1e9+7;
long int ans=1,a=2;
while(n>0){
if(n%2==1){
ans=(ans*a)%val;
}
n=n/2;
a=(a*a)%val;
}
return ans;
}
int main(){
long int n;
cin>>n;
long int ans=modulo(n);
cout<<ans<<endl;
}
