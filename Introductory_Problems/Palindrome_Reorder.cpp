#include<bits/stdc++.h>
using namespace std;
 
int main(){
string s;
cin>>s;
unordered_map<int,int>freq;
for(char ch:s){
freq[ch]++;
}
string mid="",left="";
for(auto& entry:freq){
char ch=entry.first;
int count=entry.second;
if(count%2!=0){
if(!mid.empty()){
cout<<"NO SOLUTION"<<endl;
return 0;
}
mid=string(1,ch);
}
left+=string(count/2,ch);
}
string right=left;
reverse(right.begin(),right.end());
cout<<left+mid+right<<endl;
return 0;
}

