#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,elem;
cin>>n;
long int sum=n*(n+1)/2;
vector<long int>arr(n-1);
for(long int i=1;i<n;i++){
cin>>elem;
arr.push_back(elem);
}
long int arrsum=0;
for(long int num:arr){
arrsum+=num;
}
cout<<sum-arrsum;
 return 0;
}
