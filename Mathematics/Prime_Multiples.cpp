#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,k,i,j;
cin>>n>>k;
vector<long int>arr(k);
for(i=0;i<k;i++){
cin>>arr[i];
}
vector<long int>final(k+1,0);
for(i=1;i<(1<<k);i++){
long int count=0,x=n;
for(j=0;j<k;j++){
if((1<<j)&i){
count++;
x/=arr[j];
}
}
final[count]+=x;
}
long int ans=0;
for(i=0;i<=k;i++){
if(i%2==0){
ans-=final[i];}
else{
ans+=final[i];
}
}
cout<<ans<<endl;
return 0;
}
