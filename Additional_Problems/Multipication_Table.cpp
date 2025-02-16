#include<bits/stdc++.h>
using namespace std;
int main(){
long int n;
cin>>n;
long int i,left=1,right=n*n,x=0,mid;
long int temp=(n*n+1)/2;
while(left<=right){
mid=left+(right-left)/2;
long int count=0;
for(i=1;i<=n;i++) count+=min(mid/i,n);
if(count>=temp){
x=mid;
right=mid-1;
}
else left=mid+1;
}
cout<<x<<endl;
return 0;
}
