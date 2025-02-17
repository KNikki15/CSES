#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long n,i;
  cin>>n;
  long long sum=0;
  vector<long long>arr(n);
  for(i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  long long maxi=*max_element(arr.begin(),arr.end());
  cout<<max(maxi*2,sum)<<endl;
return 0;
}
