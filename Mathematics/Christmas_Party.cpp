#include<bits/stdc++.h>
using namespace std;
 
int main(){
long long n,i;
long long mod=1e9+7;
cin>>n;
vector<long long>arr(n+1);
arr[0]=1;
arr[1]=0;
arr[2]=1;
for(i=3;i<=n;i++){
arr[i]=(i-1)*(arr[i-1]+arr[i-2])%mod;
}
cout<<arr[n]<<endl;
return 0;
}
