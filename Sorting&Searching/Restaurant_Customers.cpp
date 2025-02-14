#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i;
cin>>n;
vector<long int>arr(n);
vector<long int>depart(n);
for(i=0;i<n;i++){
cin>>arr[i]>>depart[i];
}
sort(arr.begin(),arr.end());
sort(depart.begin(),depart.end());
i=0;
long int j=0,curr=0,maxi=0;
while(i<n && j<n){
if(arr[i]<depart[j]){
curr++;
maxi=max(curr,maxi);
i++;
}
else{
curr--;
j++;
}
}
cout<<maxi<<endl;
return 0;
}
