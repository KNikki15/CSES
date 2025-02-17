#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long n,t,i,mintime;
  cin>>n>>t;
  vector<long long>arr(n);
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  long long left=1,right=arr[0]*t;
  while(left<=right){
  long long mid=left+(right-left)/2;
  long long sum=0;
  for(i=0;i<n;i++){
    sum+=(mid/arr[i]);
  }
  if(sum>=t){
      mintime=mid;
      right=mid-1;
    }
    else{
      left=mid+1;
    }
  }
  cout<<mintime<<endl;
return 0;
}
