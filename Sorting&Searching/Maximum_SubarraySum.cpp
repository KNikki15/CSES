#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  long int n,i;
  cin>>n;
  vector<long int>arr(n);
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
    long int curr=0;
    long int maxi=INT_MIN;
    for (long int num : arr) {
        curr+=num;
        if (curr> maxi) {
            maxi=curr;
        }
        if (curr<0) {
            curr=0;
        }
    }
    cout<<maxi<<endl;
    return 0;
}
