#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i;
cin>>n;
vector<long int>arr(n);
for(i=0;i<n;i++){
cin>>arr[i];
}
sort(arr.begin(),arr.end());
long int least=1;
for(i=0;i<n;i++){
if(arr[i]>least){
break;
}
least+=arr[i];
}
cout<<least<<endl;
return 0;
}
