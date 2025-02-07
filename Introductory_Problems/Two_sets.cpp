#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n;
cin>>n;
long int totalsum=n*(n+1)/2;
if(totalsum%2!=0){
cout<<"NO"<<endl;
return 0;
}
cout<<"YES"<<endl;
vector<long int>arr1;
vector<long int>arr2;
long int i,target=totalsum/2;
for(i=n;i>=1;i--){
if(target>=i){
arr1.push_back(i);
target-=i;}
else{
arr2.push_back(i);}
}
cout<<arr1.size()<<endl;
for(long int num:arr1){
cout<<num<<" ";}
cout<<endl<<arr2.size()<<endl;
for(long int num:arr2){
cout<<num<<" ";}
cout<<endl;
return 0;
}
