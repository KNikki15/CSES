#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i;
cin>>n;
vector<long int>arr(n);
vector<long int>pos(n+1);
for(i=0;i<n;i++){
cin>>arr[i];
}
for(i=0;i<n;i++){
pos[arr[i]]=i;
}
long int maxi=0,rounds=0;
for(i=1;i<=n;i++){
if(pos[i]<maxi){
rounds++;
}
maxi=pos[i];
}
cout<<rounds+1<<endl;
return 0;
}
