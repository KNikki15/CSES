#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<long int,long int>,null_type, less<pair<long int,long int>>,rb_tree_tag,tree_order_statistics_node_update>
 
int main() {
long int n,k,i,j;
cin>>n>>k;
vector<int>arr(n);
for(i=0;i<n;i++){
  cin>>arr[i];
}
ordered_set st;
for(i=0;i<k;i++){
  st.insert({arr[i],i});
}
j=k-1;i=0;
while(j<n){
  cout<<st.find_by_order((k-1)/2)->first<<" ";
  st.erase({arr[i],i});
  st.insert({arr[j+1],j+1});
  i++;j++;
}
return 0;
}
