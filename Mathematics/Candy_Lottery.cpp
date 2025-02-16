#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,k,i;
cin>>n>>k;
double res=0.0;
for(i=1;i<=k;i++){
long double z=(pow((long double)i/k,n))-(pow((long double)(i-1)/k,n));
res+=i*z;
}
cout<<fixed<<setprecision(6)<<res<<endl;
return 0;
}
