#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i,q;
cin>>n>>q;
vector<long int>arr(n);
for(i=0;i<n;i++){
cin>>arr[i];
}
vector<long int>pre(n);
pre[0]=arr[0];
for(i=1;i<n;i++){
pre[i]=pre[i-1]^arr[i];
}
while(q--){
long int a,b;
cin>>a>>b;
if(a==1){
cout<<pre[b-1]<<endl;
}
else if(a==b){
cout<<arr[b-1]<<endl;
}
else{
cout<<(pre[b-1]^pre[a-2])<<endl;}
}
return 0;
}
