#include<bits/stdc++.h>
using namespace std;
 
int main(){
string s;
cin>>s;
int n=s.size(),curr=1,maxi=1;
for(int i=1;i<n;i++){
if(s[i-1]==s[i]){
curr+=1;
maxi=max(maxi,curr);
}
else{
curr=1;}
}
cout<<maxi<<endl;
return 0;
}
