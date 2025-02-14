#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,m,k;
cin>>n>>m>>k;
vector<long int>appli(n);
vector<long int>apart(m);
long int i=0,j=0;
for(i=0;i<n;i++){
cin>>appli[i];
}
for(i=0;i<m;i++){
cin>>apart[i];
}
sort(appli.begin(),appli.end());
sort(apart.begin(),apart.end());
i=0;
long int count=0;
while(i<n && j<m){
if(apart[j]<appli[i]-k){
j++;}
else if(apart[j]>appli[i]+k){
i++;}
else{
count++;
i++;
j++;
}
}
cout<<count<<endl;
return 0;
}
