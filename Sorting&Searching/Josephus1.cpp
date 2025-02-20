#include<bits/stdc++.h>
using namespace std;
 
int main(){
long long n,i;
cin>>n;
vector<long long>arr(n);
for(i=0;i<n;i++){
 arr[i]=i+1;
}
while(arr.size()>1){
  vector<long long>v;
  for(i=0;i<arr.size();i++){
    if(i%2==0){
    v.push_back(arr[i]);
  }
  else cout<<arr[i]<<" ";
  }
  if(arr.size()%2==0){
    arr=v;
  }
  else{
    long long j=v.back();
    v.pop_back();
    arr.clear();
    arr.push_back(j);
    for(int elem: v) arr.push_back(elem);
  }
}
cout<<arr[0];
return 0;
}
