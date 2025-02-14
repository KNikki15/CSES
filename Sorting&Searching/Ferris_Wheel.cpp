#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,x,i;
cin>>n>>x;
vector<long int>weight(n);
for(i=0;i<n;i++){
cin>>weight[i];
}
sort(weight.begin(),weight.end());
long int count=0,j=n-1;
i=0;
while(i<=j){
if(weight[i]+weight[j]<=x){
i++;
j--;
}
else{
j--;
}
count++;
}
cout<<count<<endl;
return 0;
}
