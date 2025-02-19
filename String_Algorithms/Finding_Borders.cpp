#include<bits/stdc++.h>
using namespace std;
 
int main(){
string s;
cin>>s;
int n=s.length(),i,j;
vector<int>len(n,0);
for(i=1;i<n;i++){
  j=len[i-1];
  while(j>0 && s[i]!=s[j]){
    j=len[j-1];
  }
  if(s[i]==s[j]){
  j++;
  }
  len[i]=j;
}
vector<int>bd;
int size=len[n-1];
while(size){
bd.push_back(size);
size=len[size-1];
}
for(i=bd.size()-1;i>=0;i--){
  cout<<bd[i]<<" ";
}
cout<<endl;
return 0;
}
