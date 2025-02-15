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
long int count=0,mid=n/2;
for(i=0;i<n;i++){
count+=abs(arr[mid]-arr[i]);
}
cout<<count<<endl;
return 0;
}
