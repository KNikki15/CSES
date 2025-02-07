#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,elem;
cin>>n;
vector<long int>arr(n);
for(long int i=0;i<n;i++){
cin>>elem;
arr[i]=elem;
}
long int moves=0;
for(long int i=0;i<n-1;i++){
if(arr[i+1]<=arr[i]){
moves+=arr[i]-arr[i+1];
arr[i+1]=arr[i];
}
}
cout<<moves<<endl;
return 0;
}
